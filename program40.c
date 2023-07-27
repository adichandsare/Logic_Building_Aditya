//ACCEPT NUMBER AND PRINT THE NUMBER OF FACTOR OF THAT FACTOR
#include<stdio.h>
#include<stdbool.h>
int CountFactor(int iNo)
{
    int iCnt=0;
    int iFactCnt=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt;
}
int main()
{
    int iValue=0;
    bool iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    iRet=CountFactor(iValue);
    printf("Number of Factor are : %d\n",iRet);
    return 0;
}
