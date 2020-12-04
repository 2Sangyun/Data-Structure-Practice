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

void msgsnd(list<char> snd);

int main(int argc, char const *argv[]) {

    list<char> a;
    int i = 0;
    a.push_back('a');
    a.push_back('b');
    a.push_back('c');
    a.push_back('d');

    msgsnd(a);
    return 0;
}

void msgsnd(list<char> snd) {

    key_t mykey = ftok("mymsgkey", 1);
    int msqid = msgget(mykey, IPC_CREAT);

    MsgSnd msgSnd;
    MsgRslt msgRslt;

    int i = 0;
    memset(&msgSnd, 0x00, sizeof(MsgSnd));
    msgSnd.mtype = MSG_TYPE_CALC;

    list<char>::iterator it;
    for (it = snd.begin(); it != snd.end(); ++it) {
        msgSnd.msg[i++] = *it;
        cout << *it << endl;
    }
    cout << msgSnd.msg << endl;

    msgsnd(msqid, &msgSnd, MSG_SIZE_CALC, 0);
    memset(&msgRslt, 0x00, sizeof(MsgRslt));
    msgrcv(msqid, &msgRslt, MSG_SIZE_RSLT, MSG_TYPE_RSLT, 0);
    cout << msgRslt.rslt << endl;
}
