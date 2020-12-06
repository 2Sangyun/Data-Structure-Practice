#include "msmsg.hpp"
#include <fcntl.h>
#include <iostream>
#include <list>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

void msgsnd(string snd1, string snd2);

int main(int argc, char const *argv[]) {

    string str1 = "hello";
    string str2 = "world!";

    msgsnd(str1, str2);
    return 0;
}

void msgsnd(string snd1, string snd2) {

    key_t mykey = ftok("mymsgkey", 1);
    int msqid = msgget(mykey, IPC_CREAT);

    MsgSnd msgSnd;
    MsgRslt msgRslt;

    int i = 0;
    memset(&msgSnd, 0x00, sizeof(MsgSnd));
    msgSnd.mtype = MSG_TYPE_CALC;
    string::iterator it;
    for (it = snd1.begin(); it != snd1.end(); ++it) {
        msgSnd.msg1[i++] = *it;
    }
    i = 0;
    for (it = snd2.begin(); it != snd2.end(); ++it) {
        msgSnd.msg2[i++] = *it;
    }

    msgsnd(msqid, &msgSnd, MSG_SIZE_CALC, 0);
    memset(&msgRslt, 0x00, sizeof(MsgRslt));
    msgrcv(msqid, &msgRslt, MSG_SIZE_RSLT, MSG_TYPE_RSLT, 0);
    cout << msgRslt.rslt << endl;
}
