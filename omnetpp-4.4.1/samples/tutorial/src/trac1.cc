#include<omnetpp.h>
#include<string.h>
class Trc1:public cSimpleModule{
protected:
    virtual void handleMessage(cMessage *c);
    virtual void initialize();
};

Define_Module(Trc1);

void Trc1::initialize(){
    if(strcmp(getName(),"tic")==0){
        cMessage *msg = new cMessage("tictocmessage");
        send(msg,"out");
    }
}
void Trc1::handleMessage(cMessage *c){
    send(c,"out");
}

