/*
* HostAutoConfigurator - automatically assigns IP addresses and sets up routing table
* Copyright (C) 2009 Christoph Sommer <christoph.sommer@informatik.uni-erlangen.de>
* Copyright (C) 2010 Alfonso Ariza
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/

#ifndef NETWORKLAYER_AUTOROUTING_HOSTAUTOCONFIGURATOR2_H
#define NETWORKLAYER_AUTOROUTING_HOSTAUTOCONFIGURATOR2_H

#include <omnetpp.h>
#include "INETDefs.h"
#include "IPvXAddress.h"
#include <deque>

/**
* HostAutoConfigurator automatically assigns IP addresses and sets up routing table.
*
* @author Christoph Sommer
*/
class INET_API HostAutoConfigurator2 : public cSimpleModule
{
  public:
    virtual void initialize(int stage);
    virtual void finish();
    virtual int numInitStages() const {return 5;}

    virtual void handleMessage(cMessage *msg);
    virtual void handleSelfMsg(cMessage *msg);
    HostAutoConfigurator2();
    ~HostAutoConfigurator2();

  protected:
    void setupNetworkLayer();
    void addDefaultRoutes();
    void addDefaultRoute();
    void setupRoutingTable();
    void fillRoutingTables();

    bool debug; /**< whether to emit debug messages */
    static std::deque<IPvXAddress>asignedAddress;
    std::deque<IPvXAddress>myAddressList;
    static bool firstTime;
    bool checkIfExist(const IPvXAddress &);
};

#endif

