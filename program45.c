#include<stdio.h>
#include<stdbool.h>
int CheckPrime(int iNo)
{
    int iCnt=0;
    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
           return false;
        }
    }
    return true;
}
int main()
{
    int iValue=0;
    bool bRet;
    printf("Enter The Number:\n");
    scanf("%d",&iValue);
    bRet=CheckPrime(iValue);
    if(bRet==true)
    {
        printf("%d is the prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}
