import re;
import sys;
def main():
    totalSent = 0
    totalReceived =0 
    inputfile = open(sys.argv[1],'r')
    for line in inputfile:
        mo = re.match('scalar AODVVANET.vehicle\[[0-9]+\].*statPacket[A-Za-z]+:count.*[0-9]+',line)
        if(mo != None):
            splitlist = re.split(':count\s*',mo.group())
            if(re.search('statPacketSent',splitlist[0]) != None):
                totalSent= totalSent + int(splitlist[1])
            elif(re.search('statPacketReceived',splitlist[0]) != None):
                totalReceived = totalReceived + int(splitlist[1])
    print "Total Packets Sent : " + str(totalSent) +"\nTotal Packet Received : "  + str(totalReceived)
    throughput = float(totalReceived) / 300
    packetDeliveryRatio = float(totalReceived) / totalSent
    print "Throughput : " + str(throughput)
    print "Packet Delivery Ratio : " + str(packetDeliveryRatio)
            
if __name__ == '__main__':
    main()
