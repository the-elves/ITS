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

#include "applications/traci/aodvTraCI.h"

#include "VanetModuleAccess.h"
#include "NodeStatus.h"
#include "UDPSocket.h"
#include "ModuleAccess.h"
#include <string>
#include <stdlib.h>

Define_Module(aodvTraCI);

simsignal_t aodvTraCI::mobilityStateChangedSignal = registerSignal("mobilityStateChanged");
simsignal_t aodvTraCI::statPacketSentSignal = registerSignal("statPacketSent");
simsignal_t aodvTraCI::statPacketRecvdSignal = registerSignal("statPacketReceived");
int i;
void aodvTraCI::initialize(int stage)
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
        cModule* host = getContainingNode(this);
        traci = check_and_cast<aodvTraCIMobility *>(host->getModuleByPath(".mobility"));
        traci->subscribe(mobilityStateChangedSignal, this);

        setupLowerLayer();
        sendMessage();
    }
}

void aodvTraCI::setupLowerLayer() {
    socket.setOutputGate(gate("udp$o"));
    socket.joinLocalMulticastGroups();
    socket.bind(12345);
    socket.setBroadcast(true);
}

void aodvTraCI::handleMessage(cMessage* msg) {
    if (msg->isSelfMessage()) {
        handleSelfMsg(msg);
    } else {
        handleLowerMsg(msg);
        emit(statPacketRecvdSignal,NULL);
    }
}

void aodvTraCI::handleSelfMsg(cMessage* msg) {
}

void aodvTraCI::handleLowerMsg(cMessage* msg) {
    if (!sentMessage) sendMessage();
    delete msg;
}

void aodvTraCI::receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj) {
    Enter_Method_Silent();
    if (signalID == mobilityStateChangedSignal) {
        handlePositionUpdate();
    }
}

void aodvTraCI::sendMessage() {
    sentMessage = true;

    cPacket* newMessage = new cPacket();
    cPacket* newMessage1 = new cPacket();
    emit(statPacketSentSignal,NULL);
    int i = getParentModule()->getIndex();
    i = i%9;
    if(i>1){
        std::string snext,snext2;
        snext = "10.0.0.";
        snext2 = "10.0.0.";
        char loctate[4];
        sprintf(loctate,"%d",(4+23*(i-1)));
        std::string indexip(loctate);
        snext = snext + indexip;
        indexip = "";
        sprintf(loctate,"%d",(4+23*(i-2)));
        indexip = loctate;
        snext2 = snext2 + indexip;

        snext = "10.0.0.4";
        IPv4Address *next = new IPv4Address(snext.c_str());
        IPv4Address *next2 = new IPv4Address(snext2.c_str());
        std::string disp = "t=sending to";
        disp = disp + snext;
        getParentModule()->bubble(disp.c_str());
        socket.sendTo(newMessage, *(next), 12345);
    }
}

void aodvTraCI::handlePositionUpdate() {
    if (traci->getPosition().x < 7350) {
        if (!sentMessage) sendMessage();
    }
}
