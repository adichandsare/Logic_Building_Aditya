//ACCEPT NUMBER AND PRINT EVEN AND ODD DIGITS
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
        }
        iNo=iNo/10;
    }
    return 0;
}
int main()
{
    int iValue=0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    DisplayEven(iValue);
    return 0;
}
