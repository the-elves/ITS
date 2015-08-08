#
# OMNeT++/OMNEST Makefile for VANETSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -Xcustom/routing/gpsr -Xcustom/routing/rbvtp -Xveins -I../../../inetmanet-2.0/src/util/headerserializers/ipv4 -I../../../inetmanet-2.0/src/wpan/linklayer/ieee802154/contract -I../../../inetmanet-2.0/src -I../../../inetmanet-2.0/src/util/headerserializers -I../../../inetmanet-2.0/src/networklayer/common -I../../../inetmanet-2.0/src/battery/models -I../../../inetmanet-2.0/src/networklayer/manetrouting/dsr -I../../../inetmanet-2.0/src/linklayer/radio/propagation -I../../../inetmanet-2.0/src/transport/tcp_common -I../../../inetmanet-2.0/src/networklayer/contract -I../../../inetmanet-2.0/src/wpan/networklayer/contract -I../../../inetmanet-2.0/src/linklayer/common -I../../../inetmanet-2.0/src/util/headerserializers/ipv6 -I../../../inetmanet-2.0/src/world/obstacles -I../../../inetmanet-2.0/src/linklayer/ieee80211/radio -I../../../inetmanet-2.0/src/networklayer/manetrouting/base -I../../../inetmanet-2.0/src/networklayer/autorouting/ipv4 -I../../../inetmanet-2.0/src/networklayer/arp -I../../../inetmanet-2.0/src/util/headerserializers/tcp -I../../../inetmanet-2.0/src/transport/sctp -I../../../inetmanet-2.0/src/base -I../../../inetmanet-2.0/src/util/headerserializers/sctp -I../../../inetmanet-2.0/src/networklayer/ipv6tunneling -I../../../inetmanet-2.0/src/linklayer/contract -I../../../inetmanet-2.0/src/wpan/linklayer/ieee802154/mac -I../../../inetmanet-2.0/src/wpan/linklayer/bmac -I../../../inetmanet-2.0/src/world/radio -I../../../inetmanet-2.0/src/linklayer/ieee80211/mac -I../../../inetmanet-2.0/src/transport/udp -I../../../inetmanet-2.0/src/applications/pingapp -I../../../inetmanet-2.0/src/networklayer/ipv6 -I../../../inetmanet-2.0/src/linklayer/radio -I../../../inetmanet-2.0/src/transport/contract -I../../../inetmanet-2.0/src/networklayer/icmpv6 -I../../../inetmanet-2.0/src/mobility/contract -I../../../inetmanet-2.0/src/networklayer/routing/aodv -I../../../inetmanet-2.0/src/world/powercontrol -I../../../inetmanet-2.0/src/linklayer/ethernet -I../../../inetmanet-2.0/src/util/headerserializers/udp -I../../../inetmanet-2.0/src/linklayer/ieee80211mesh/locator -I../../../inetmanet-2.0/src/linklayer/ieee80211/mgmt -I../../../inetmanet-2.0/src/networklayer/ipv4 -I../../../inetmanet-2.0/src/mobility/common -I../../../inetmanet-2.0/src/wpan/phyLayer/ieee802154 -I../../../inetmanet-2.0/src/status -I../../../inetmanet-2.0/src/linklayer/ieee80211/radio/errormodel -I../../../inetmanet-2.0/src/util -I../../../inetmanet-2.0/src/networklayer/xmipv6 -L../../../inetmanet-2.0/out/$(CONFIGNAME)/src -linet -DINET_IMPORT -KINETMANET_2_0_PROJ=../../../inetmanet-2.0
#

# Name of target to be created (-o option)
TARGET = VANETSim$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../../../inetmanet-2.0/src/util/headerserializers/ipv4 \
    -I../../../inetmanet-2.0/src/wpan/linklayer/ieee802154/contract \
    -I../../../inetmanet-2.0/src \
    -I../../../inetmanet-2.0/src/util/headerserializers \
    -I../../../inetmanet-2.0/src/networklayer/common \
    -I../../../inetmanet-2.0/src/battery/models \
    -I../../../inetmanet-2.0/src/networklayer/manetrouting/dsr \
    -I../../../inetmanet-2.0/src/linklayer/radio/propagation \
    -I../../../inetmanet-2.0/src/transport/tcp_common \
    -I../../../inetmanet-2.0/src/networklayer/contract \
    -I../../../inetmanet-2.0/src/wpan/networklayer/contract \
    -I../../../inetmanet-2.0/src/linklayer/common \
    -I../../../inetmanet-2.0/src/util/headerserializers/ipv6 \
    -I../../../inetmanet-2.0/src/world/obstacles \
    -I../../../inetmanet-2.0/src/linklayer/ieee80211/radio \
    -I../../../inetmanet-2.0/src/networklayer/manetrouting/base \
    -I../../../inetmanet-2.0/src/networklayer/autorouting/ipv4 \
    -I../../../inetmanet-2.0/src/networklayer/arp \
    -I../../../inetmanet-2.0/src/util/headerserializers/tcp \
    -I../../../inetmanet-2.0/src/transport/sctp \
    -I../../../inetmanet-2.0/src/base \
    -I../../../inetmanet-2.0/src/util/headerserializers/sctp \
    -I../../../inetmanet-2.0/src/networklayer/ipv6tunneling \
    -I../../../inetmanet-2.0/src/linklayer/contract \
    -I../../../inetmanet-2.0/src/wpan/linklayer/ieee802154/mac \
    -I../../../inetmanet-2.0/src/wpan/linklayer/bmac \
    -I../../../inetmanet-2.0/src/world/radio \
    -I../../../inetmanet-2.0/src/linklayer/ieee80211/mac \
    -I../../../inetmanet-2.0/src/transport/udp \
    -I../../../inetmanet-2.0/src/applications/pingapp \
    -I../../../inetmanet-2.0/src/networklayer/ipv6 \
    -I../../../inetmanet-2.0/src/linklayer/radio \
    -I../../../inetmanet-2.0/src/transport/contract \
    -I../../../inetmanet-2.0/src/networklayer/icmpv6 \
    -I../../../inetmanet-2.0/src/mobility/contract \
    -I../../../inetmanet-2.0/src/networklayer/routing/aodv \
    -I../../../inetmanet-2.0/src/world/powercontrol \
    -I../../../inetmanet-2.0/src/linklayer/ethernet \
    -I../../../inetmanet-2.0/src/util/headerserializers/udp \
    -I../../../inetmanet-2.0/src/linklayer/ieee80211mesh/locator \
    -I../../../inetmanet-2.0/src/linklayer/ieee80211/mgmt \
    -I../../../inetmanet-2.0/src/networklayer/ipv4 \
    -I../../../inetmanet-2.0/src/mobility/common \
    -I../../../inetmanet-2.0/src/wpan/phyLayer/ieee802154 \
    -I../../../inetmanet-2.0/src/status \
    -I../../../inetmanet-2.0/src/linklayer/ieee80211/radio/errormodel \
    -I../../../inetmanet-2.0/src/util \
    -I../../../inetmanet-2.0/src/networklayer/xmipv6 \
    -I. \
    -Inodes \
    -Irouting \
    -Irouting/aodvvanet \
    -Irouting/bitcar \
    -Irouting/gpsr \
    -Irouting/rbvtp \
    -Irouting/rbvtr \
    -Ivanetrouting \
    -Ivanetrouting/applications \
    -Ivanetrouting/applications/traci \
    -Ivanetrouting/base \
    -Ivanetrouting/mobility \
    -Ivanetrouting/mobility/common \
    -Ivanetrouting/mobility/contract \
    -Ivanetrouting/mobility/single \
    -Ivanetrouting/networklayer \
    -Ivanetrouting/util \
    -Ivanetrouting/world \
    -Ivanetrouting/world/traci

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L../../../inetmanet-2.0/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath ../../../inetmanet-2.0/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = /src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/routing/aodvvanet/AODVVANETRouteData.o \
    $O/routing/aodvvanet/AODVVANETRouting.o \
    $O/routing/bitcar/BITCARRouteData.o \
    $O/routing/bitcar/BITCARRouting.o \
    $O/routing/gpsr/GPSR.o \
    $O/routing/gpsr/PositionTable.o \
    $O/routing/rbvtr/RBVTRRouteData.o \
    $O/routing/rbvtr/RBVTRRouting.o \
    $O/vanetrouting/applications/traci/aodvTraCI.o \
    $O/vanetrouting/applications/traci/aodvTraCITestApp.o \
    $O/vanetrouting/applications/traci/bitcarTraCIDemo.o \
    $O/vanetrouting/applications/traci/bitcarTraCITestApp.o \
    $O/vanetrouting/applications/traci/rbvtrTraCIDemo.o \
    $O/vanetrouting/applications/traci/rbvtrTraCITestApp.o \
    $O/vanetrouting/base/VanetAddress.o \
    $O/vanetrouting/base/VanetModuleAccess.o \
    $O/vanetrouting/base/VanetNetfilterHook.o \
    $O/vanetrouting/base/VanetRoutingBase.o \
    $O/vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.o \
    $O/vanetrouting/mobility/common/MovingVANETMobilityBase.o \
    $O/vanetrouting/mobility/common/VANETMobilityAccess.o \
    $O/vanetrouting/mobility/common/VANETMobilityBase.o \
    $O/vanetrouting/mobility/contract/IVANETMobility.o \
    $O/vanetrouting/mobility/single/aodvTraCIMobility.o \
    $O/vanetrouting/mobility/single/bitcarTraCIMobility.o \
    $O/vanetrouting/mobility/single/LinearVANETMobility.o \
    $O/vanetrouting/mobility/single/rbvtrTraCIMobility.o \
    $O/vanetrouting/util/GlobalWirelessLinkInspector_Vanet.o \
    $O/vanetrouting/world/traci/aodvTraCIScenarioManager.o \
    $O/vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.o \
    $O/vanetrouting/world/traci/bitcarTraCIScenarioManager.o \
    $O/vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.o \
    $O/vanetrouting/world/traci/rbvtrTraCIScenarioManager.o \
    $O/vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.o \
    $O/vanetrouting/world/traci/vanetTraCIColor.o \
    $O/routing/aodvvanet/AODVVANETControlPackets_m.o \
    $O/routing/bitcar/BITCARControlPackets_m.o \
    $O/routing/gpsr/GPSR_m.o \
    $O/routing/rbvtr/RBVTRControlPackets_m.o \
    $O/vanetrouting/base/ControlVanetRouting_m.o \
    $O/vanetrouting/base/Vanet_ControlInfoBreakLink_m.o \
    $O/vanetrouting/base/Vanet_LocatorNotificationInfo_m.o \
    $O/vanetrouting/base/Vanet_MeshControlInfo_m.o

# Message files
MSGFILES = \
    routing/aodvvanet/AODVVANETControlPackets.msg \
    routing/bitcar/BITCARControlPackets.msg \
    routing/gpsr/GPSR.msg \
    routing/rbvtr/RBVTRControlPackets.msg \
    vanetrouting/base/ControlVanetRouting.msg \
    vanetrouting/base/Vanet_ControlInfoBreakLink.msg \
    vanetrouting/base/Vanet_LocatorNotificationInfo.msg \
    vanetrouting/base/Vanet_MeshControlInfo.msg

# Other makefile variables (-K)
INETMANET_2_0_PROJ=../../../inetmanet-2.0

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppmain$D $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS) -DINET_IMPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating executable: $@
	$(Q)$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f VANETSim VANETSim.exe libVANETSim.so libVANETSim.a libVANETSim.dll libVANETSim.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f nodes/*_m.cc nodes/*_m.h
	$(Q)-rm -f routing/*_m.cc routing/*_m.h
	$(Q)-rm -f routing/aodvvanet/*_m.cc routing/aodvvanet/*_m.h
	$(Q)-rm -f routing/bitcar/*_m.cc routing/bitcar/*_m.h
	$(Q)-rm -f routing/gpsr/*_m.cc routing/gpsr/*_m.h
	$(Q)-rm -f routing/rbvtp/*_m.cc routing/rbvtp/*_m.h
	$(Q)-rm -f routing/rbvtr/*_m.cc routing/rbvtr/*_m.h
	$(Q)-rm -f vanetrouting/*_m.cc vanetrouting/*_m.h
	$(Q)-rm -f vanetrouting/applications/*_m.cc vanetrouting/applications/*_m.h
	$(Q)-rm -f vanetrouting/applications/traci/*_m.cc vanetrouting/applications/traci/*_m.h
	$(Q)-rm -f vanetrouting/base/*_m.cc vanetrouting/base/*_m.h
	$(Q)-rm -f vanetrouting/mobility/*_m.cc vanetrouting/mobility/*_m.h
	$(Q)-rm -f vanetrouting/mobility/common/*_m.cc vanetrouting/mobility/common/*_m.h
	$(Q)-rm -f vanetrouting/mobility/contract/*_m.cc vanetrouting/mobility/contract/*_m.h
	$(Q)-rm -f vanetrouting/mobility/single/*_m.cc vanetrouting/mobility/single/*_m.h
	$(Q)-rm -f vanetrouting/networklayer/*_m.cc vanetrouting/networklayer/*_m.h
	$(Q)-rm -f vanetrouting/util/*_m.cc vanetrouting/util/*_m.h
	$(Q)-rm -f vanetrouting/world/*_m.cc vanetrouting/world/*_m.h
	$(Q)-rm -f vanetrouting/world/traci/*_m.cc vanetrouting/world/traci/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc nodes/*.cc routing/*.cc routing/aodvvanet/*.cc routing/bitcar/*.cc routing/gpsr/*.cc routing/rbvtp/*.cc routing/rbvtr/*.cc vanetrouting/*.cc vanetrouting/applications/*.cc vanetrouting/applications/traci/*.cc vanetrouting/base/*.cc vanetrouting/mobility/*.cc vanetrouting/mobility/common/*.cc vanetrouting/mobility/contract/*.cc vanetrouting/mobility/single/*.cc vanetrouting/networklayer/*.cc vanetrouting/util/*.cc vanetrouting/world/*.cc vanetrouting/world/traci/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/routing/aodvvanet/AODVVANETRouteData.o: routing/aodvvanet/AODVVANETRouteData.cc \
  routing/aodvvanet/AODVVANETRouteData.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h
$O/routing/aodvvanet/AODVVANETRouting.o: routing/aodvvanet/AODVVANETRouting.cc \
  ../../../inetmanet-2.0/src/networklayer/common/IInterfaceTable.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram_m.h \
  ../../../inetmanet-2.0/src/linklayer/contract/MACAddress.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPSocket.h \
  ../../../inetmanet-2.0/src/base/LifecycleOperation.h \
  routing/aodvvanet/AODVVANETRouting.h \
  ../../../inetmanet-2.0/src/transport/udp/UDPPacket_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4RouteRule.h \
  ../../../inetmanet-2.0/src/base/NotifierConsts.h \
  vanetrouting/base/VanetModuleAccess.h \
  routing/aodvvanet/AODVVANETRouteData.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceEntry.h \
  ../../../inetmanet-2.0/src/networklayer/common/INetfilter.h \
  ../../../inetmanet-2.0/src/status/NodeStatus.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPSocket.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/RoutingTableAccess.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceToken.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Route.h \
  ../../../inetmanet-2.0/src/base/NotificationBoard.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPProtocolId_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IRoutingTable.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo.h \
  ../../../inetmanet-2.0/src/linklayer/contract/Ieee802Ctrl_m.h \
  ../../../inetmanet-2.0/src/base/INotifiable.h \
  ../../../inetmanet-2.0/src/transport/udp/UDPPacket.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  routing/aodvvanet/AODVVANETControlPackets_m.h \
  ../../../inetmanet-2.0/src/base/NodeOperations.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPControlInfo_m.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h \
  ../../../inetmanet-2.0/src/base/ModuleAccess.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPControlInfo.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo_m.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceTableAccess.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h
$O/routing/bitcar/BITCARRouteData.o: routing/bitcar/BITCARRouteData.cc \
  routing/bitcar/BITCARRouteData.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h
$O/routing/bitcar/BITCARRouting.o: routing/bitcar/BITCARRouting.cc \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceToken.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Route.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPProtocolId_m.h \
  ../../../inetmanet-2.0/src/base/NotificationBoard.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/RoutingTableAccess.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  routing/bitcar/BITCARControlPackets_m.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPSocket.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceEntry.h \
  ../../../inetmanet-2.0/src/status/NodeStatus.h \
  ../../../inetmanet-2.0/src/networklayer/common/INetfilter.h \
  vanetrouting/base/VanetModuleAccess.h \
  ../../../inetmanet-2.0/src/base/NotifierConsts.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPSocket.h \
  ../../../inetmanet-2.0/src/base/LifecycleOperation.h \
  ../../../inetmanet-2.0/src/transport/udp/UDPPacket_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4RouteRule.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram_m.h \
  ../../../inetmanet-2.0/src/linklayer/contract/MACAddress.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
  ../../../inetmanet-2.0/src/networklayer/common/IInterfaceTable.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPControlInfo.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo_m.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceTableAccess.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/base/ModuleAccess.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPControlInfo_m.h \
  routing/bitcar/BITCARRouting.h \
  ../../../inetmanet-2.0/src/base/NodeOperations.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  routing/bitcar/BITCARRouteData.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo.h \
  ../../../inetmanet-2.0/src/linklayer/contract/Ieee802Ctrl_m.h \
  ../../../inetmanet-2.0/src/base/INotifiable.h \
  ../../../inetmanet-2.0/src/transport/udp/UDPPacket.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IRoutingTable.h
$O/routing/gpsr/GPSR.o: routing/gpsr/GPSR.cc \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h \
  routing/gpsr/GPSR.h \
  ../../../inetmanet-2.0/src/base/ModuleAccess.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo_m.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceTableAccess.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IRoutingTable.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo.h \
  ../../../inetmanet-2.0/src/transport/udp/UDPPacket.h \
  ../../../inetmanet-2.0/src/base/INotifiable.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  routing/gpsr/GPSRDefs.h \
  ../../../inetmanet-2.0/src/base/NodeOperations.h \
  ../../../inetmanet-2.0/src/status/NodeStatus.h \
  ../../../inetmanet-2.0/src/networklayer/common/INetfilter.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceEntry.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPSocket.h \
  routing/gpsr/PositionTable.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Route.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceToken.h \
  ../../../inetmanet-2.0/src/base/NotificationBoard.h \
  ../../../inetmanet-2.0/src/mobility/contract/IMobility.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPProtocolId_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram.h \
  ../../../inetmanet-2.0/src/networklayer/common/IInterfaceTable.h \
  routing/gpsr/GPSR_m.h \
  ../../../inetmanet-2.0/src/linklayer/contract/MACAddress.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4RouteRule.h \
  ../../../inetmanet-2.0/src/transport/udp/UDPPacket_m.h \
  ../../../inetmanet-2.0/src/base/LifecycleOperation.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/NotifierConsts.h
$O/routing/gpsr/PositionTable.o: routing/gpsr/PositionTable.cc \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  routing/gpsr/PositionTable.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h
$O/routing/rbvtr/RBVTRRouteData.o: routing/rbvtr/RBVTRRouteData.cc \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  routing/rbvtr/RBVTRRouteData.h
$O/routing/rbvtr/RBVTRRouting.o: routing/rbvtr/RBVTRRouting.cc \
  ../../../inetmanet-2.0/src/base/NodeOperations.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  routing/rbvtr/RBVTRRouting.h \
  ../../../inetmanet-2.0/src/linklayer/contract/Ieee802Ctrl_m.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo.h \
  ../../../inetmanet-2.0/src/base/INotifiable.h \
  ../../../inetmanet-2.0/src/transport/udp/UDPPacket.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IRoutingTable.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPControlInfo.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceTableAccess.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo_m.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/base/ModuleAccess.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPControlInfo_m.h \
  vanetrouting/base/VanetModuleAccess.h \
  ../../../inetmanet-2.0/src/base/NotifierConsts.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPSocket.h \
  ../../../inetmanet-2.0/src/base/LifecycleOperation.h \
  ../../../inetmanet-2.0/src/transport/udp/UDPPacket_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4RouteRule.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram_m.h \
  ../../../inetmanet-2.0/src/linklayer/contract/MACAddress.h \
  ../../../inetmanet-2.0/src/networklayer/common/IInterfaceTable.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceToken.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Route.h \
  ../../../inetmanet-2.0/src/base/NotificationBoard.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPProtocolId_m.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/RoutingTableAccess.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  routing/rbvtr/RBVTRRouteData.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPSocket.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceEntry.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  ../../../inetmanet-2.0/src/networklayer/common/INetfilter.h \
  ../../../inetmanet-2.0/src/status/NodeStatus.h \
  routing/rbvtr/RBVTRControlPackets_m.h
$O/vanetrouting/applications/traci/aodvTraCI.o: vanetrouting/applications/traci/aodvTraCI.cc \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h \
  vanetrouting/mobility/single/aodvTraCIMobility.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  ../../../inetmanet-2.0/src/base/LifecycleOperation.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPSocket.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  vanetrouting/base/VanetModuleAccess.h \
  ../../../inetmanet-2.0/src/status/NodeStatus.h \
  vanetrouting/world/traci/aodvTraCIScenarioManager.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  vanetrouting/applications/traci/aodvTraCI.h
$O/vanetrouting/applications/traci/aodvTraCITestApp.o: vanetrouting/applications/traci/aodvTraCITestApp.cc \
  ../../../inetmanet-2.0/src/base/Compat.h \
  vanetrouting/base/VanetModuleAccess.h \
  vanetrouting/applications/traci/aodvTraCITestApp.h \
  ../../../inetmanet-2.0/src/base/LifecycleOperation.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/status/NodeStatus.h \
  vanetrouting/world/traci/aodvTraCIScenarioManager.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/single/aodvTraCIMobility.h \
  vanetrouting/mobility/contract/IVANETMobility.h
$O/vanetrouting/applications/traci/bitcarTraCIDemo.o: vanetrouting/applications/traci/bitcarTraCIDemo.cc \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/single/bitcarTraCIMobility.h \
  vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
  ../../../inetmanet-2.0/src/base/LifecycleOperation.h \
  vanetrouting/applications/traci/bitcarTraCIDemo.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPSocket.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  vanetrouting/base/VanetModuleAccess.h \
  ../../../inetmanet-2.0/src/status/NodeStatus.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h
$O/vanetrouting/applications/traci/bitcarTraCITestApp.o: vanetrouting/applications/traci/bitcarTraCITestApp.cc \
  vanetrouting/mobility/single/bitcarTraCIMobility.h \
  vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  vanetrouting/base/VanetModuleAccess.h \
  ../../../inetmanet-2.0/src/base/LifecycleOperation.h \
  ../../../inetmanet-2.0/src/status/NodeStatus.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/applications/traci/bitcarTraCITestApp.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/base/Coord.h
$O/vanetrouting/applications/traci/rbvtrTraCIDemo.o: vanetrouting/applications/traci/rbvtrTraCIDemo.cc \
  ../../../inetmanet-2.0/src/base/LifecycleOperation.h \
  ../../../inetmanet-2.0/src/transport/contract/UDPSocket.h \
  vanetrouting/base/VanetModuleAccess.h \
  vanetrouting/mobility/single/rbvtrTraCIMobility.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  ../../../inetmanet-2.0/src/status/NodeStatus.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  vanetrouting/applications/traci/rbvtrTraCIDemo.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h
$O/vanetrouting/applications/traci/rbvtrTraCITestApp.o: vanetrouting/applications/traci/rbvtrTraCITestApp.cc \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  vanetrouting/applications/traci/rbvtrTraCITestApp.h \
  ../../../inetmanet-2.0/src/status/NodeStatus.h \
  vanetrouting/mobility/single/rbvtrTraCIMobility.h \
  vanetrouting/base/VanetModuleAccess.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/LifecycleOperation.h
$O/vanetrouting/base/VanetAddress.o: vanetrouting/base/VanetAddress.cc \
  ../../../inetmanet-2.0/src/linklayer/contract/MACAddress.h \
  vanetrouting/base/VanetAddress.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h
$O/vanetrouting/base/VanetModuleAccess.o: vanetrouting/base/VanetModuleAccess.cc \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  vanetrouting/base/VanetModuleAccess.h \
  ../../../inetmanet-2.0/src/base/Compat.h
$O/vanetrouting/base/VanetNetfilterHook.o: vanetrouting/base/VanetNetfilterHook.cc \
  ../../../inetmanet-2.0/src/networklayer/manetrouting/base/compatibility_dsr.h \
  ../../../inetmanet-2.0/src/networklayer/manetrouting/dsr/dsr-uu/timer.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/ICMP.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IRoutingTable.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo.h \
  ../../../inetmanet-2.0/src/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/ICMPAccess.h \
  vanetrouting/base/VanetNetfilterHook.h \
  ../../../inetmanet-2.0/src/base/ModuleAccess.h \
  ../../../inetmanet-2.0/src/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceTableAccess.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4.h \
  ../../../inetmanet-2.0/src/base/QueueBase.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/ICMPMessage_m.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4RouteRule.h \
  vanetrouting/base/VanetAddress.h \
  vanetrouting/base/ControlVanetRouting_m.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/NotifierConsts.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4FragBuf.h \
  ../../../inetmanet-2.0/src/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram.h \
  ../../../inetmanet-2.0/src/networklayer/common/IInterfaceTable.h \
  ../../../inetmanet-2.0/src/base/ProtocolMap.h \
  ../../../inetmanet-2.0/src/linklayer/contract/MACAddress.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/RoutingTableAccess.h \
  ../../../inetmanet-2.0/src/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/base/ReassemblyBuffer.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Route.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceToken.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPProtocolId_m.h \
  ../../../inetmanet-2.0/src/networklayer/common/INetfilter.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceEntry.h \
  ../../../inetmanet-2.0/src/base/AbstractQueue.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/ICMPMessage.h \
  ../../../inetmanet-2.0/src/networklayer/arp/IARPCache.h
$O/vanetrouting/base/VanetRoutingBase.o: vanetrouting/base/VanetRoutingBase.cc \
  ../../../inetmanet-2.0/src/base/NotifierConsts.h \
  ../../../inetmanet-2.0/src/transport/udp/UDPPacket_m.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  ../../../inetmanet-2.0/src/base/LifecycleOperation.h \
  vanetrouting/base/VanetAddress.h \
  ../../../inetmanet-2.0/src/base/ProtocolMap.h \
  ../../../inetmanet-2.0/src/networklayer/common/IInterfaceTable.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6ControlInfo_m.h \
  ../../../inetmanet-2.0/src/base/NotificationBoard.h \
  ../../../inetmanet-2.0/src/mobility/contract/IMobility.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceToken.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/RoutingTableAccess.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  ../../../inetmanet-2.0/src/base/ReassemblyBuffer.h \
  ../../../inetmanet-2.0/src/base/ILifecycle.h \
  ../../../inetmanet-2.0/src/networklayer/arp/IARPCache.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/ICMPMessage.h \
  ../../../inetmanet-2.0/src/base/AbstractQueue.h \
  ../../../inetmanet-2.0/src/networklayer/common/INetfilter.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceEntry.h \
  vanetrouting/base/compatibility_vanet.h \
  ../../../inetmanet-2.0/src/transport/udp/UDPPacket.h \
  vanetrouting/base/VanetNetfilterHook.h \
  ../../../inetmanet-2.0/src/base/INotifiable.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo.h \
  ../../../inetmanet-2.0/src/mobility/common/MobilityAccess.h \
  ../../../inetmanet-2.0/src/linklayer/contract/PhyControlInfo_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/ICMP.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/networklayer/common/InterfaceTableAccess.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211mesh/locator/ILocator.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  ../../../inetmanet-2.0/src/base/ModuleAccess.h \
  vanetrouting/base/VanetRoutingBase.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6ControlInfo.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4FragBuf.h \
  vanetrouting/util/GlobalWirelessLinkInspector_Vanet.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4RouteRule.h \
  ../../../inetmanet-2.0/src/wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
  ../../../inetmanet-2.0/src/linklayer/contract/MACAddress.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram_m.h \
  ../../../inetmanet-2.0/src/wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Datagram.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4InterfaceData.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPProtocolId_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4Route.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPSocket.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  ../../../inetmanet-2.0/src/base/NodeOperations.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/ICMPAccess.h \
  vanetrouting/base/Vanet_ControlInfoBreakLink_m.h \
  ../../../inetmanet-2.0/src/linklayer/contract/Ieee802Ctrl_m.h \
  ../../../inetmanet-2.0/src/base/PassiveQueueBase.h \
  ../../../inetmanet-2.0/src/networklayer/arp/ARP.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IRoutingTable.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4ControlInfo_m.h \
  ../../../inetmanet-2.0/src/base/IPassiveQueue.h \
  ../../../inetmanet-2.0/src/wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  ../../../inetmanet-2.0/src/wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/ICMPMessage_m.h \
  ../../../inetmanet-2.0/src/networklayer/ipv4/IPv4.h \
  ../../../inetmanet-2.0/src/base/QueueBase.h \
  ../../../inetmanet-2.0/src/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h
$O/vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.o: vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.cc \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  vanetrouting/base/VanetModuleAccess.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/mobility/common/MovingVANETMobilityBase.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h
$O/vanetrouting/mobility/common/MovingVANETMobilityBase.o: vanetrouting/mobility/common/MovingVANETMobilityBase.cc \
  vanetrouting/base/VanetModuleAccess.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/mobility/common/MovingVANETMobilityBase.h
$O/vanetrouting/mobility/common/VANETMobilityAccess.o: vanetrouting/mobility/common/VANETMobilityAccess.cc \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/base/VanetModuleAccess.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/common/VANETMobilityAccess.h
$O/vanetrouting/mobility/common/VANETMobilityBase.o: vanetrouting/mobility/common/VANETMobilityBase.cc \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  vanetrouting/base/VanetModuleAccess.h
$O/vanetrouting/mobility/contract/IVANETMobility.o: vanetrouting/mobility/contract/IVANETMobility.cc \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/base/Compat.h
$O/vanetrouting/mobility/single/LinearVANETMobility.o: vanetrouting/mobility/single/LinearVANETMobility.cc \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/mobility/common/MovingVANETMobilityBase.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  vanetrouting/mobility/single/LinearVANETMobility.h \
  vanetrouting/base/VanetModuleAccess.h \
  vanetrouting/mobility/common/VANETMobilityBase.h
$O/vanetrouting/mobility/single/aodvTraCIMobility.o: vanetrouting/mobility/single/aodvTraCIMobility.cc \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  vanetrouting/mobility/single/aodvTraCIMobility.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/world/traci/aodvTraCIScenarioManager.h \
  vanetrouting/base/VanetModuleAccess.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/contract/IVANETMobility.h
$O/vanetrouting/mobility/single/bitcarTraCIMobility.o: vanetrouting/mobility/single/bitcarTraCIMobility.cc \
  vanetrouting/base/VanetModuleAccess.h \
  vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
  vanetrouting/mobility/single/bitcarTraCIMobility.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/util/FWMath.h
$O/vanetrouting/mobility/single/rbvtrTraCIMobility.o: vanetrouting/mobility/single/rbvtrTraCIMobility.cc \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  vanetrouting/mobility/single/rbvtrTraCIMobility.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  vanetrouting/base/VanetModuleAccess.h
$O/vanetrouting/util/GlobalWirelessLinkInspector_Vanet.o: vanetrouting/util/GlobalWirelessLinkInspector_Vanet.cc \
  vanetrouting/util/GlobalWirelessLinkInspector_Vanet.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/linklayer/contract/MACAddress.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv6Address.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPv4Address.h \
  ../../../inetmanet-2.0/src/networklayer/contract/IPvXAddress.h \
  vanetrouting/base/VanetAddress.h
$O/vanetrouting/world/traci/aodvTraCIScenarioManager.o: vanetrouting/world/traci/aodvTraCIScenarioManager.cc \
  vanetrouting/world/traci/aodvTraCIScenarioManager.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/base/VanetModuleAccess.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  vanetrouting/mobility/single/aodvTraCIMobility.h \
  vanetrouting/world/traci/aodvTraCIConstants.h \
  ../../../inetmanet-2.0/src/util/FWMath.h
$O/vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.o: vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.cc \
  vanetrouting/world/traci/aodvTraCIScenarioManager.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/base/VanetModuleAccess.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  vanetrouting/world/traci/aodvTraCIConstants.h \
  ../../../inetmanet-2.0/src/util/FWMath.h
$O/vanetrouting/world/traci/bitcarTraCIScenarioManager.o: vanetrouting/world/traci/bitcarTraCIScenarioManager.cc \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/mobility/common/VANETMobilityBase.h \
  vanetrouting/mobility/single/bitcarTraCIMobility.h \
  vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
  vanetrouting/base/VanetModuleAccess.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/world/traci/bitcarTraCIConstants.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/util/FWMath.h
$O/vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.o: vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.cc \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
  vanetrouting/base/VanetModuleAccess.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  vanetrouting/world/traci/bitcarTraCIConstants.h \
  ../../../inetmanet-2.0/src/base/Compat.h
$O/vanetrouting/world/traci/rbvtrTraCIScenarioManager.o: vanetrouting/world/traci/rbvtrTraCIScenarioManager.cc \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/world/traci/rbvtrTraCIConstants.h \
  vanetrouting/mobility/single/rbvtrTraCIMobility.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  vanetrouting/mobility/contract/IVANETMobility.h \
  vanetrouting/base/VanetModuleAccess.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/mobility/common/VANETMobilityBase.h
$O/vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.o: vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.cc \
  vanetrouting/base/VanetModuleAccess.h \
  vanetrouting/world/traci/vanetTraCIColor.h \
  vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
  ../../../inetmanet-2.0/src/base/Coord.h \
  ../../../inetmanet-2.0/src/base/Compat.h \
  ../../../inetmanet-2.0/src/base/INETDefs.h \
  vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.h \
  ../../../inetmanet-2.0/src/util/FWMath.h \
  vanetrouting/world/traci/rbvtrTraCIConstants.h
$O/vanetrouting/world/traci/vanetTraCIColor.o: vanetrouting/world/traci/vanetTraCIColor.cc \
  vanetrouting/world/traci/vanetTraCIColor.h
