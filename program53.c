//ACCEPT NUMBER AND REVERSE IT AND RETURN
#include<stdio.h>
int DisplayReverse(int iNo)
{
    int iDigit=0;
    int iRev=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
    return iRev;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number: \n");
    scanf("%d",&iValue);
    iRet=DisplayReverse(iValue);
    printf("Reverse Number is : %d",iRet);
    return 0;
}