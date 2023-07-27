#include<stdio.h>
#include<stdbool.h>
int CountFactor(int iNo)
{
    int iCnt=0;
    int iFactCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=2;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt;
}
bool CheckPrime(int iNo)
{
    int iRet=0;
    iRet=CountFactor(iNo);
    if(iRet==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    bRet=CountFactor(iValue);
    if(bRet==true)
    {
        printf("%d is the prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    printf("Number of Factor are : %d\n",bRet);
    return 0;
}
