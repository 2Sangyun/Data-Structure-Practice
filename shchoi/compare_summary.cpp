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
    int right_cnt = 0; //���� ���ؼ� ������ Ƚ���� �� count ����
    int size = 0; //�ҷ��� ������ ���� ����� �� ����
    iter1 = input.begin();
    iter2 = file.begin();
    while (1) {
        if (iter1 == input.end() || iter2 == file.end()) { //�Է±��� Ȥ�� ���ϱ��ڸ� �� �о�� while�� ������������
            cout << "file text:";
            for (iter2 = file.begin(); iter2 != file.end(); ++iter2) {   //�Է¹��� ���� ���� ��ü���
                cout << *iter2;
                size++;
            }
            cout << endl;

            cout << "your input text is: ";
            for (iter1 = input.begin(); iter1 != input.end(); ++iter1) { //�Է��� Ű���� ���� ��ü���
                cout << *iter1;
            }
            cout << endl;
            cout << endl;
            cout << "right percent is: " << (double)right_cnt / (double)size * 100 << "%" << endl; // (�´±��ڼ�/���� ���ڼ�)*100 �ؼ� ��������
            break;
        }


        else if (*iter1 == *iter2) {
            right_cnt++;
        }

        ++iter1;
        ++iter2;

    }
}