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
void compare(list<char>input,list<char>file);
int main(void){
    
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



    compare(exampleKey,examplefile);
    return 0;
}
// main�ȿ� ������ ����Ʈ�� ���Կ� ����Ʈ ����
//compare�Լ��� �츮�� �� Ű���� �Է±��� ����Ʈ�� input ����, �ҷ��� �ѱ������� file ���ڿ� ������.


void compare(list<char>input,list<char>file) {
        list<char>::iterator iter1;
        list<char>::iterator iter2;
        int right_cnt=0; //���� ���ؼ� ������ Ƚ���� �� count ����
        int size=0; //�ҷ��� ������ ���� ����� �� ����
        iter1=input.begin();
        iter2=file.begin();
        while(1){
            if(iter1==input.end()||iter2==file.end()){ //�Է±��� Ȥ�� ���ϱ��ڸ� �� �о�� while�� ������������
                cout<<"file's text is: ";
                for(iter2=file.begin();iter2!=file.end();++iter2){   //�Է¹��� ���� ���� ��ü���
                    cout<<*iter2;
                    size++;
                }
                cout<<endl;

                cout<<"your input text is: ";
                for(iter1=input.begin();iter1!=input.end();++iter1){ //�Է��� Ű���� ���� ��ü���
                    cout<<*iter1;
                }
                cout<<endl;
                cout << endl;
                cout<<"file size is "<<size<<", and count is "<<right_cnt<<endl;
                cout<<"right percent is: "<<(double)right_cnt/(double)size*100<<"%"<<endl; // (�´±��ڼ�/���� ���ڼ�)*100 �ؼ� ��������
                break;
            }

            else{
               
                cout<<"now input: "<<*iter1<<endl; //���� ���� Ű���� ����
                cout<<"now file: "<<*iter2<<endl; //���� ���� ���� ����
                if(*iter1==*iter2){
                    right_cnt++;
                    cout<<"right!"<<endl;
                     cout<<endl;
                }
                else{
                    cout<<"incorrect! what messages?"<<endl;
                    cout<<"file is "<<*iter2<<", but input is: "<<*iter1<<endl;
                    cout<<endl;
                }
            }

            ++iter1;
            ++iter2;

        }
    }