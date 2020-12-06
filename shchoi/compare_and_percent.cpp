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
double right_percent(list<char>input, list<char>file);
void compare(list<char>input, list<char>file);
int main(void) {
    list<char>exampleKey;
    exampleKey.push_back('i');
    exampleKey.push_back('a');
    exampleKey.push_back('m');
    exampleKey.push_back('l');

    list<char>examplefile;
    examplefile.push_back('i');
    examplefile.push_back('a');
    examplefile.push_back('t');
    examplefile.push_back('l');



    compare(exampleKey, examplefile);
    cout << right_percent(exampleKey, examplefile) << "%" << endl;
    return 0;
}


double right_percent(list<char>input, list<char>file) {
    list<char>::iterator iter1;
    list<char>::iterator iter2;
    int right_cnt = 0; 
    int size = 0; 
    iter1 = input.begin();
    iter2 = file.begin();
    while (1) {
        if (iter1 == input.end() || iter2 == file.end()) { /
            for (iter2 = file.begin(); iter2 != file.end(); ++iter2) {  
                size++;
            }
            cout << endl;
            return (double)right_cnt / (double)size * 100; // (�´±��ڼ�/���� ���ڼ�)*100 �ؼ� ��������
            break;
        }
        else if (*iter1 == *iter2) {
            right_cnt++;
        }

        ++iter1;
        ++iter2;
    }
}


void compare(list<char>input, list<char>file) {
    list<char>::iterator iter1;
    list<char>::iterator iter2;
    int right_cnt = 0; 
    iter1 = input.begin();
    iter2 = file.begin();
    while (1) {
        if (iter1 == input.end() || iter2 == file.end()) { //�Է±��� Ȥ�� ���ϱ��ڸ� �� �о�� while�� ������������
            cout << "file text:";
            for (iter2 = file.begin(); iter2 != file.end(); ++iter2) {   //�Է¹��� ���� ���� ��ü���
                cout << *iter2;
            }
            cout << endl;

            cout << "your input text is: ";
            for (iter1 = input.begin(); iter1 != input.end(); ++iter1) { //�Է��� Ű���� ���� ��ü���
                cout << *iter1;
            }
            break;
        }
        ++iter1;
        ++iter2;
    }
}