#ifndef __MYMSG_H__
#define __MYMSG_H__
#define MSG_TYPE_CALC 1 //	숫자 및 연산자
#define MSG_TYPE_RSLT 2 //	결과 메시지
#define MSG_SIZE_CALC (sizeof(MsgSnd) - sizeof(long))
#define MSG_SIZE_RSLT (sizeof(MsgRslt) - sizeof(long))
using namespace std;

struct __MsgSnd {
    long mtype;
    char msg[256];
};
typedef struct __MsgSnd MsgSnd;

struct __MsgRslt {
    long mtype;
    int rslt;
};
typedef struct __MsgRslt MsgRslt;
#endif //!__MYMSG_H__
