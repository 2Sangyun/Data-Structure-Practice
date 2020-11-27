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

void readfile(char *filename);

int main(int argc, char const *argv[]) {
    char *pahtName = "./read.txt";
    readfile(pahtName);
    return 0;
}
void readfile(char *filename) {
    key_t mykey = ftok("mymsgkey", 1);
    int msqid = msgget(mykey, IPC_CREAT);

    char rd[MAX_SIZE + 1] = {};
    char wr[MAX_SIZE + 1] = {};
    int rsize = 0, fd = 0;

    MsgSnd msgSnd;
    MsgRslt msgRslt;

    fd = open(filename, O_RDONLY);
    do {
        memset(rd, '\0', MAX_SIZE + 1);
        rsize = read(fd, rd, MAX_SIZE);
        cout << "txt : " << rd << endl;
        cout << "you : ";
        cin >> wr;
        // fflush(stdout);
        // fflush(stdin);
        memset(&msgSnd, 0x00, sizeof(MsgSnd));
        msgSnd.mtype = MSG_TYPE_SEND;
        memset(msgSnd.Text.rd, '\0', MAX_SIZE + 1);
        strcpy(msgSnd.Text.rd, rd);
        strcpy(msgSnd.Text.wr, wr);
        msgsnd(msqid, &msgSnd, MSG_SIZE_SEND, 0);

        memset(&msgRslt, 0x00, sizeof(MsgRslt));
        msgrcv(msqid, &msgRslt, MSG_SIZE_RSLT, MSG_TYPE_RSLT, 0);
        cout << ">>>" << msgRslt.rslt << '%' << endl;

    } while (rsize > 0);
    close(fd);
}
