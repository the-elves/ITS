//
// Copyright (C) 2006-2011 Christoph Sommer <christoph.sommer@uibk.ac.at>
//
// Documentation for these modules is at http://veins.car2x.org/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#include "applications/traci/rbvtrTraCIDemo.h"

#include "VanetModuleAccess.h"
#include "NodeStatus.h"
#include "UDPSocket.h"

Define_Module(rbvtrTraCIDemo);

simsignal_t rbvtrTraCIDemo::mobilityStateChangedSignal = registerSignal("mobilityStateChanged");

void rbvtrTraCIDemo::initialize(int stage)
{
    cSimpleModule::initialize(stage);

    if (stage == 0)
    {
        sentMessage = false;
    }
    else if (stage == 3)
    {
        bool isOperational;
        NodeStatus *nodeStatus = dynamic_cast<NodeStatus *>(findContainingNode(this)->getSubmodule("status"));
        isOperational = (!nodeStatus) || nodeStatus->getState() == NodeStatus::UP;
        if (!isOperational)
            throw cRuntimeError("This module doesn't support starting in node DOWN state");

        traci = rbvtrTraCIMobilityAccess().get();
        traci->subscribe(mobilityStateChangedSignal, this);

        setupLowerLayer();
    }
}

void rbvtrTraCIDemo::setupLowerLayer() {
    socket.setOutputGate(gate("udp$o"));
    socket.joinLocalMulticastGroups();
    socket.bind(12345);
    socket.setBroadcast(true);
}

void rbvtrTraCIDemo::handleMessage(cMessage* msg) {
    if (msg->isSelfMessage()) {
        handleSelfMsg(msg);
    } else {
        handleLowerMsg(msg);
    }
}

void rbvtrTraCIDemo::handleSelfMsg(cMessage* msg) {
}

void rbvtrTraCIDemo::handleLowerMsg(cMessage* msg) {
    if (!sentMessage) sendMessage();
    delete msg;
}

void rbvtrTraCIDemo::receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj) {
    Enter_Method_Silent();
    if (signalID == mobilityStateChangedSignal) {
        handlePositionUpdate();
    }
}

void rbvtrTraCIDemo::sendMessage() {
    sentMessage = true;

    cPacket* newMessage = new cPacket();

    socket.sendTo(newMessage, IPv4Address::ALL_HOSTS_MCAST, 12345);
}

void rbvtrTraCIDemo::handlePositionUpdate() {
    if (traci->getPosition().x < 7350) {
        if (!sentMessage) sendMessage();
    }
}
