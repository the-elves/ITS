//
// Copyright (C) 2006-2012 Christoph Sommer <christoph.sommer@uibk.ac.at>
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

#ifndef WORLD_TraCI_rbvtrTraCISCENARIOMANAGER_H
#define WORLD_TraCI_rbvtrTraCISCENARIOMANAGER_H

#include <utility>
#include <map>
#include <list>
#include <sstream>
#include <iomanip>

#include <omnetpp.h>

#include "INETDefs.h"
#include "Coord.h"
#include "VanetModuleAccess.h"
#include "vanetTraCIColor.h"

/**
 * @brief
 * Creates and moves nodes controlled by a rbvtrTraCI server.
 *
 * If the server is a SUMO road traffic simulation, you can use the
 * rbvtrTraCIScenarioManagerLaunchd module and sumo-launchd.py script instead.
 *
 * All nodes created thus must have a rbvtrTraCIMobility submodule.
 *
 * See the Veins website <a href="http://veins.car2x.org/"> for a tutorial, documentation, and publications </a>.
 *
 * @author Christoph Sommer, David Eckhoff, Falko Dressler, Zheng Yao, Tobias Mayer, Alvaro Torres Cortes, Luca Bedogni
 *
 * @see rbvtrTraCIMobility
 * @see rbvtrTraCIScenarioManagerLaunchd
 *
 */
class rbvtrTraCIScenarioManager : public cSimpleModule
{
    public:

        enum VehicleSignal {
            VEH_SIGNAL_UNDEF = -1,
            VEH_SIGNAL_NONE = 0,
            VEH_SIGNAL_BLINKER_RIGHT = 1,
            VEH_SIGNAL_BLINKER_LEFT = 2,
            VEH_SIGNAL_BLINKER_EMERGENCY = 4,
            VEH_SIGNAL_BRAKELIGHT = 8,
            VEH_SIGNAL_FRONTLIGHT = 16,
            VEH_SIGNAL_FOGLIGHT = 32,
            VEH_SIGNAL_HIGHBEAM = 64,
            VEH_SIGNAL_BACKDRIVE = 128,
            VEH_SIGNAL_WIPER = 256,
            VEH_SIGNAL_DOOR_OPEN_LEFT = 512,
            VEH_SIGNAL_DOOR_OPEN_RIGHT = 1024,
            VEH_SIGNAL_EMERGENCY_BLUE = 2048,
            VEH_SIGNAL_EMERGENCY_RED = 4096,
            VEH_SIGNAL_EMERGENCY_YELLOW = 8192
        };

        enum DepartDefs
        {
            DEPART_NOW = 2, DEPART_LANE_BEST_FREE = 5, DEPART_POS_BASE = 4, DEPART_SPEED_MAX = 3
        };

        ~rbvtrTraCIScenarioManager();
        virtual int numInitStages() const { return std::max(cSimpleModule::numInitStages(), 2); }
        virtual void initialize(int stage);
        virtual void finish();
        virtual void handleMessage(cMessage *msg);
        virtual void handleSelfMsg(cMessage *msg);

        bool isConnected() const
        {
            return (socketPtr);
        }

        std::pair<uint32_t, std::string> commandGetVersion();
        void commandSetSpeedMode(std::string nodeId, int32_t bitset);
        void commandSetSpeed(std::string nodeId, double speed);
        void commandNewRoute(std::string nodeId, std::string roadId);
        void commandSetVehicleParking(std::string nodeId);
        std::string commandGetEdgeId(std::string nodeId);
        std::string commandGetCurrentEdgeOnRoute(std::string nodeId);
        std::string commandGetLaneId(std::string nodeId);
        double commandGetLanePosition(std::string nodeId);
        std::list<std::string> commandGetPlannedEdgeIds(std::string nodeId);
        std::string commandGetRouteId(std::string nodeId);
        std::list<std::string> commandGetRouteEdgeIds(std::string routeId);
        void commandChangeRoute(std::string nodeId, std::string roadId, double travelTime);
        double commandDistanceRequest(Coord position1, Coord position2, bool returnDrivingDistance);
        void commandStopNode(std::string nodeId, std::string roadId, double pos, uint8_t laneid, double radius, double waittime);
        void commandSetTrafficLightProgram(std::string trafficLightId, std::string program);
        void commandSetTrafficLightPhaseIndex(std::string trafficLightId, int32_t index);
        std::list<std::string> commandGetPolygonIds();
        std::string commandGetPolygonTypeId(std::string polyId);
        std::list<Coord> commandGetPolygonShape(std::string polyId);
        void commandSetPolygonShape(std::string polyId, std::list<Coord> points);
        void commandAddPolygon(std::string polyId, std::string polyType, const vanetTraCIColor& color, bool filled,
                int32_t layer, std::list<Coord> points);
        void commandRemovePolygon(std::string polyId, int32_t layer);
        void commandAddPoi(std::string poiId, std::string poiType, const vanetTraCIColor& color, int32_t layer, Coord pos);
        void commandRemovePoi(std::string poiId, int32_t layer);
        std::list<std::string> commandGetLaneIds();
        std::list<Coord> commandGetLaneShape(std::string laneId);
        std::string commandGetLaneEdgeId(std::string laneId);
        double commandGetLaneLength(std::string laneId);
        double commandGetLaneMaxSpeed(std::string laneId);
        double commandGetLaneMeanSpeed(std::string laneId);
        std::list<std::string> commandGetJunctionIds();
        Coord commandGetJunctionPosition(std::string junctionId);
        bool commandAddVehicle(std::string vehicleId, std::string vehicleTypeId, std::string routeId,
                simtime_t emitTime_st = -DEPART_NOW, double emitPosition = -DEPART_POS_BASE, double emitSpeed =
                        -DEPART_SPEED_MAX, int8_t emitLane = -DEPART_LANE_BEST_FREE);

        const std::map<std::string, cModule*>& getManagedHosts() {
            return hosts;
        }

    protected:
        /**
         * Coord equivalent for storing rbvtrTraCI coordinates
         */
        struct rbvtrTraCICoord {
            rbvtrTraCICoord() : x(0), y(0) {}
            rbvtrTraCICoord(double x, double y) : x(x), y(y) {}
            double x;
            double y;
        };

        /**
         * Byte-buffer that stores values in rbvtrTraCI byte-order
         */
        class rbvtrTraCIBuffer {
            public:
                rbvtrTraCIBuffer() : buf() {
                    buf_index = 0;
                }

                rbvtrTraCIBuffer(std::string buf) : buf(buf) {
                    buf_index = 0;
                }

                template<typename T> T read() {
                    T buf_to_return;
                    unsigned char *p_buf_to_return = reinterpret_cast<unsigned char*>(&buf_to_return);

                    if (isBigEndian()) {
                        for (size_t i=0; i<sizeof(buf_to_return); ++i) {
                            if (eof()) throw cRuntimeError("Attempted to read past end of byte buffer");
                            p_buf_to_return[i] = buf[buf_index++];
                        }
                    } else {
                        for (size_t i=0; i<sizeof(buf_to_return); ++i) {
                            if (eof()) throw cRuntimeError("Attempted to read past end of byte buffer");
                            p_buf_to_return[sizeof(buf_to_return)-1-i] = buf[buf_index++];
                        }
                    }

                    return buf_to_return;
                }

                template<typename T> void write(T inv) {
                    unsigned char *p_buf_to_send = reinterpret_cast<unsigned char*>(&inv);

                    if (isBigEndian()) {
                        for (size_t i=0; i<sizeof(inv); ++i) {
                            buf += p_buf_to_send[i];
                        }
                    } else {
                        for (size_t i=0; i<sizeof(inv); ++i) {
                            buf += p_buf_to_send[sizeof(inv)-1-i];
                        }
                    }
                }

                template<typename T> T read(T& out) {
                    out = read<T>();
                    return out;
                }

                template<typename T> rbvtrTraCIBuffer& operator >>(T& out) {
                    out = read<T>();
                    return *this;
                }

                template<typename T> rbvtrTraCIBuffer& operator <<(const T& inv) {
                    write(inv);
                    return *this;
                }

                bool eof() const {
                    return buf_index == buf.length();
                }

                void set(std::string buf) {
                    this->buf = buf;
                    buf_index = 0;
                }

                void clear() {
                    set("");
                }

                std::string str() const {
                    return buf;
                }

                std::string hexStr() const {
                    std::stringstream ss;
                    for (std::string::const_iterator i = buf.begin() + buf_index; i != buf.end(); ++i) {
                        if (i != buf.begin()) ss << " ";
                        ss << std::hex << std::setw(2) << std::setfill('0') << (int)(uint8_t)*i;
                    }
                    return ss.str();
                }

            protected:
                bool isBigEndian() {
                    short a = 0x0102;
                    unsigned char *p_a = reinterpret_cast<unsigned char*>(&a);
                    return (p_a[0] == 0x01);
                }

                std::string buf;
                size_t buf_index;
        };

        bool debug; /**< whether to emit debug messages */
        simtime_t connectAt; /**< when to connect to rbvtrTraCI server (must be the initial timestep of the server) */
        simtime_t firstStepAt; /**< when to start synchronizing with the rbvtrTraCI server (-1: immediately after connecting) */
        simtime_t updateInterval; /**< time interval of hosts' position updates */
        std::string moduleType; /**< module type to be used in the simulation for each managed vehicle */
        std::string moduleName; /**< module name to be used in the simulation for each managed vehicle */
        std::string moduleDisplayString; /**< module displayString to be used in the simulation for each managed vehicle */
        std::string host;
        int port;
        bool autoShutdown; /**< Shutdown module as soon as no more vehicles are in the simulation */
        int margin;
        double penetrationRate;
        std::list<std::string> roiRoads; /**< which roads (e.g. "hwy1 hwy2") are considered to consitute the region of interest, if not empty */
        std::list<std::pair<rbvtrTraCICoord, rbvtrTraCICoord> > roiRects; /**< which rectangles (e.g. "0,0-10,10 20,20-30,30) are considered to consitute the region of interest, if not empty */

        void* socketPtr;
        rbvtrTraCICoord netbounds1; /* network boundaries as reported by rbvtrTraCI (x1, y1) */
        rbvtrTraCICoord netbounds2; /* network boundaries as reported by rbvtrTraCI (x2, y2) */

        size_t nextNodeVectorIndex; /**< next OMNeT++ module vector index to use */
        std::map<std::string, cModule*> hosts; /**< vector of all hosts managed by us */
        std::set<std::string> unEquippedHosts;
        std::set<std::string> subscribedVehicles; /**< all vehicles we have already subscribed to */
        uint32_t activeVehicleCount; /**< number of vehicles reported as active by rbvtrTraCI server */
        bool autoShutdownTriggered;
        cMessage* connectAndStartTrigger; /**< self-message scheduled for when to connect to rbvtrTraCI server and start running */
        cMessage* executeOneTimestepTrigger; /**< self-message scheduled for when to next call executeOneTimestep */

        uint32_t getCurrentTimeMs(); /**< get current simulation time (in ms) */

        void executeOneTimestep(); /**< read and execute all commands for the next timestep */

        void connect();
        virtual void init_traci();

        void addModule(std::string nodeId, std::string type, std::string name, std::string displayString, const Coord& position, std::string road_id = "", double speed = -1, double acceleration = -1, double angle = -1);
        cModule* getManagedModule(std::string nodeId); /**< returns a pointer to the managed module named moduleName, or 0 if no module can be found */
        void deleteModule(std::string nodeId);

        bool isModuleUnequipped(std::string nodeId); /**< returns true if this vehicle is Unequipped */

        /**
         * returns whether a given position lies within the simulation's region of interest.
         * Modules are destroyed and re-created as managed vehicles leave and re-enter the ROI
         */
        bool isInRegionOfInterest(const rbvtrTraCICoord& position, std::string road_id, double speed, double angle);

        /**
         * sends a single command via rbvtrTraCI, checks status response, returns additional responses
         */
        rbvtrTraCIBuffer queryrbvtrTraCI(uint8_t commandId, const rbvtrTraCIBuffer& buf = rbvtrTraCIBuffer());

        /**
         * sends a single command via rbvtrTraCI, expects no reply, returns true if successful
         */
        rbvtrTraCIScenarioManager::rbvtrTraCIBuffer queryrbvtrTraCIOptional(uint8_t commandId, const rbvtrTraCIBuffer& buf, bool& success, std::string* errorMsg = 0);

        /**
         * returns byte-buffer containing a rbvtrTraCI command with optional parameters
         */
        std::string makerbvtrTraCICommand(uint8_t commandId, rbvtrTraCIBuffer buf = rbvtrTraCIBuffer());

        /**
         * sends a message via rbvtrTraCI (after adding the header)
         */
        void sendrbvtrTraCIMessage(std::string buf);

        /**
         * receives a message via rbvtrTraCI (and strips the header)
         */
        std::string receiverbvtrTraCIMessage();

        /**
         * commonly employed technique to get string values via rbvtrTraCI
         */
        std::string genericGetString(uint8_t commandId, std::string objectId, uint8_t variableId, uint8_t responseId);
        Coord genericGetCoord(uint8_t commandId, std::string objectId, uint8_t variableId, uint8_t responseId);
        double genericGetDouble(uint8_t commandId, std::string objectId, uint8_t variableId, uint8_t responseId);
        std::list<std::string> genericGetStringList(uint8_t commandId, std::string objectId, uint8_t variableId, uint8_t responseId);
        std::list<Coord> genericGetCoordList(uint8_t commandId, std::string objectId, uint8_t variableId, uint8_t responseId);

        /**
         * convert rbvtrTraCI coordinates to OMNeT++ coordinates
         */
        Coord rbvtrTraCI2omnet(rbvtrTraCICoord coord) const;

        /**
         * convert OMNeT++ coordinates to rbvtrTraCI coordinates
         */
        rbvtrTraCICoord omnet2rbvtrTraCI(Coord coord) const;

        /**
         * convert rbvtrTraCI angle to OMNeT++ angle (in rad)
         */
        double rbvtrTraCI2omnetAngle(double angle) const;

        /**
         * convert OMNeT++ angle (in rad) to rbvtrTraCI angle
         */
        double omnet2rbvtrTraCIAngle(double angle) const;

        void subscribeToVehicleVariables(std::string vehicleId);
        void unsubscribeFromVehicleVariables(std::string vehicleId);
        void processSimSubscription(std::string objectId, rbvtrTraCIBuffer& buf);
        void processVehicleSubscription(std::string objectId, rbvtrTraCIBuffer& buf);
        void processSubcriptionResult(rbvtrTraCIBuffer& buf);
};

template<> void rbvtrTraCIScenarioManager::rbvtrTraCIBuffer::write(std::string inv);
template<> void rbvtrTraCIScenarioManager::rbvtrTraCIBuffer::write(rbvtrTraCIScenarioManager::rbvtrTraCICoord inv);
template<> std::string rbvtrTraCIScenarioManager::rbvtrTraCIBuffer::read();
template<> rbvtrTraCIScenarioManager::rbvtrTraCICoord rbvtrTraCIScenarioManager::rbvtrTraCIBuffer::read();

class rbvtrTraCIScenarioManagerAccess
{
    public:
        rbvtrTraCIScenarioManagerAccess() {
            o = dynamic_cast<rbvtrTraCIScenarioManager*>(simulation.getModuleByPath("manager"));
            if (!o) throw cRuntimeError("Could not find a rbvtrTraCIScenarioManager module named manager");
        };

        rbvtrTraCIScenarioManager* get() {
            return o;
        }

    protected:
        rbvtrTraCIScenarioManager* o;

};

#endif
