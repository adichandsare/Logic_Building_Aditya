//ACCEPT NUMBER AND PRINT EVEN NUMBER AND ADD EVEN NUMBER
#include<stdio.h>
int DisplayEven(int iNo)
{
    int iDigit=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            printf("Even Number:%d\n",iDigit);
            iSum=iSum+iDigit;
        }
        iNo=iNo/10;
    }
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet=DisplayEven(iValue);
    printf("SUM IS :%d",iRet);
    return 0;
}
