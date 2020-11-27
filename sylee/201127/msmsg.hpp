#ifndef __MYMSG_H__
#define __MYMSG_H__
#define MSG_TYPE_SEND 1 //	숫자 및 연산자
#define MSG_TYPE_RSLT 2 //	결과 메시지
#define MSG_SIZE_SEND (sizeof(MsgSnd) - sizeof(long))
#define MSG_SIZE_RSLT (sizeof(MsgRslt) - sizeof(long))
#define MAX_SIZE 10
#define PERMS 0644
#include <list>
struct __Text {
    char rd[MAX_SIZE];
    char wr[MAX_SIZE];
    // std::list<char> wr;
};
typedef struct __Text Text;

struct __MsgSnd {
    long mtype;
    struct __Text Text;
};
typedef struct __MsgSnd MsgSnd;

struct __MsgRslt {
    long mtype;
    int rslt;
};
typedef struct __MsgRslt MsgRslt;
#endif //!__MYMSG_H__
