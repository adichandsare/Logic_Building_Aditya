#include"program59header.h"

ULONG DisplayPower(int iNo1,int iNo2)
{
    register int iCnt=0;
    ULONG LMult=1;
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        LMult=LMult*iNo1;
    }
    return LMult;
}
