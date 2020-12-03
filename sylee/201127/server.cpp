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

void signalHandler(int signum);
void sndpercent();
int compare(list<char> input, list<char> file);
key_t mykey = 0;
int msqid = 0;

int main(int argc, char const *argv[]) {
    sndpercent();
    return 0;
}
void sndpercent() {
    MsgSnd msgSnd;
    MsgRslt msgRslt;

    mykey = ftok("mymsgkey", 1);             //	키 생성
    msqid = msgget(mykey, IPC_CREAT | 0600); //	메시지 큐 생성

    signal(SIGINT, signalHandler);

    while (1) {
        puts("Wait	...");
        memset(&msgSnd, 0x00, sizeof(MsgSnd));
        msgrcv(msqid, &msgSnd, MSG_SIZE_SEND, MSG_TYPE_SEND, 0);
        cout << "read  : " << msgSnd.Text.rd << endl;
        cout << "write : " << msgSnd.Text.wr << endl;

        list<char> rdList(msgSnd.Text.rd, msgSnd.Text.rd + MAX_SIZE);
        list<char> wrList(msgSnd.Text.wr, msgSnd.Text.wr + MAX_SIZE);

        memset(&msgRslt, 0x00, sizeof(MsgRslt));
        msgRslt.mtype = MSG_TYPE_RSLT;
        msgRslt.rslt = compare(rdList, wrList);
        msgsnd(msqid, &msgRslt, MSG_SIZE_RSLT, 0);
        cout << "Send : " << msgRslt.rslt << '%' << endl;
        // fflush(stdout);
    }
}
void signalHandler(int signum) {
    if (signum == SIGINT) {
        msgctl(msqid, IPC_RMID, NULL);
        exit(0);
    }
}
int compare(list<char> input, list<char> file) {
    list<char>::iterator iter1;
    list<char>::iterator iter2;
    int right_cnt = 0; //글자 비교해서 맞으면 횟수를 셀 count 변수
    int size = 0;      //불러올 파일의 글자 사이즈를 셀 변수
    int percentage = 0;
    iter1 = input.begin();
    iter2 = file.begin();
    while (1) {
        if (iter1 == input.end() ||
            iter2 == file.end()) { //입력글자 혹은 파일글자를 다 읽어내면
                                   // while을 빠져나갈것임
            // cout << "file's text is: ";
            for (iter2 = file.begin(); iter2 != file.end();
                 ++iter2) { //입력받은 파일 글자 전체출력
                // cout << *iter2;
                size++;
            }
            // cout << endl;

            /*cout << "your input text is: ";
            for (iter1 = input.begin(); iter1 != input.end();
                 ++iter1) { //입력한 키보드 글자 전체출력
                cout << *iter1;
            }
            cout << endl;
            cout << endl;
            cout << "file size is " << size << ", and count is " << right_cnt
                 << endl;
            cout << "right percent is: "
                 << (double)right_cnt / (double)size * 100 << "%"
                 << endl; // (맞는글자수/파일 글자수)*100 해서 백분율출력*/
            break;
        }

        else {

            // cout << "now input: " << *iter1 << endl; //현재 비교할 키보드
            // 글자 cout << "now file: " << *iter2 << endl; //현재 비교할 파일
            // 글자
            if (*iter1 == *iter2) {
                right_cnt++;
                // cout << "right!" << endl;
                // cout << endl;
            } else {
                // cout << "incorrect! what messages?" << endl;
                // cout << "file is " << *iter2 << ", but input is: " << *iter1
                //<< endl;
                // cout << endl;
            }
        }

        ++iter1;
        ++iter2;
    }
    percentage = (double)right_cnt / (double)size * 100;
    return percentage;
}
