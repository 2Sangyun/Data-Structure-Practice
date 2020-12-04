#include "msmsg.hpp"
#include <iostream>
#include <list>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/types.h>
using namespace std;

// void signalHandler(int signum);
void msgrcv();

int main(int argc, char const *argv[]) {
    msgrcv();
    return 0;
}

void msgrcv() {
    key_t mykey = 0;
    int msqid = 0;
    MsgSnd msgSnd;
    MsgRslt msgRslt;
    mykey = ftok("mymsgkey", 1);
    msqid = msgget(mykey, IPC_CREAT | 0600);
    // signal(SIGINT, signalHandler);

    puts("Wait	...");
    memset(&msgSnd, 0x00, sizeof(MsgSnd));
    msgrcv(msqid, &msgSnd, MSG_SIZE_CALC, MSG_TYPE_CALC, 0);
    cout << "rcv : " << msgSnd.msg << endl;

    memset(&msgRslt, 0x00, sizeof(MsgRslt));
    msgRslt.mtype = MSG_TYPE_RSLT;
    msgRslt.rslt = 77;
    msgsnd(msqid, &msgRslt, MSG_SIZE_RSLT, 0);
    cout << "send : " << msgRslt.rslt << endl;
    fflush(stdout);
}
/*
void signalHandler(int signum) {
    if (signum == SIGINT) {
        msgctl(msqid, IPC_RMID, NULL);
        exit(0);
    }
}*/
