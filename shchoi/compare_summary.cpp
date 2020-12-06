#include <fcntl.h>
#include <iostream>
#include <list>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
void compare(list<char>input, list<char>file);
int main(void) {
    return 0;
}


void compare(list<char>input, list<char>file) {
    list<char>::iterator iter1;
    list<char>::iterator iter2;
    int right_cnt = 0; //글자 비교해서 맞으면 횟수를 셀 count 변수
    int size = 0; //불러올 파일의 글자 사이즈를 셀 변수
    iter1 = input.begin();
    iter2 = file.begin();
    while (1) {
        if (iter1 == input.end() || iter2 == file.end()) { //입력글자 혹은 파일글자를 다 읽어내면 while을 빠져나갈것임
            cout << "file text:";
            for (iter2 = file.begin(); iter2 != file.end(); ++iter2) {   //입력받은 파일 글자 전체출력
                cout << *iter2;
                size++;
            }
            cout << endl;

            cout << "your input text is: ";
            for (iter1 = input.begin(); iter1 != input.end(); ++iter1) { //입력한 키보드 글자 전체출력
                cout << *iter1;
            }
            cout << endl;
            cout << endl;
            cout << "right percent is: " << (double)right_cnt / (double)size * 100 << "%" << endl; // (맞는글자수/파일 글자수)*100 해서 백분율출력
            break;
        }


        else if (*iter1 == *iter2) {
            right_cnt++;
        }

        ++iter1;
        ++iter2;

    }
}