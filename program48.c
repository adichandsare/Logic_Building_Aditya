//ACCEPT THE NUMBER AND DISPLAY HOW MANY DIGITS IT HAVE
#include<stdio.h>
int CountNumber(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iCnt++;
        iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("ENTER NUMBER : \n");
    scanf("%d",&iValue);
    iRet=CountNumber(iValue);
    printf("Count Of Number is :%d",iRet);
    return 0;

}