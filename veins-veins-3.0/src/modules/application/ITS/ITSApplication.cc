//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "ITSApplication.h"
using Veins::AnnotationManagerAccess;
Define_Module(ITSApplication);
void ITSApplication::initialize(int stage) {
    BaseWaveApplLayer::initialize(stage);
    if(stage == 0){
        annotations = AnnotationManagerAccess().getIfExists();
    }
    if(myId==0){
        this->sendMessage(1);
    }
}

void ITSApplication::sendMessage(int id) {
    t_channel channel = dataOnSch ? type_SCH : type_CCH;
    WaveShortMessage* wsm = prepareWSM("data", dataLengthBits, channel, dataPriority, id,2);
    wsm->setWsmData("muahahaha");
    ev<<"Message sent by"<<myId;
    sendWSM(wsm);
}

void ITSApplication::onBeacon(WaveShortMessage *wsm){}

void ITSApplication::sendWSM(WaveShortMessage* wsm) {
    sendDelayedDown(wsm,individualOffset);
}
void ITSApplication::onData(WaveShortMessage* wsm){
    sendMessage((myId+1)%2);
}