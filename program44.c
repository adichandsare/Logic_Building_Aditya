//ACCEPT THE NUMBER AND PRINT ITS PRIME OR NOT (NOT USING FLAG)
#include<stdio.h>
#include<stdbool.h>
int CheckPrime(int iNo)
{
    int iCnt=0;
    //bool bFlag=true;

    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            //bFlag=false;
            break;
        }
    }
    if(iCnt==(iNo/2)+1)
    {
        return true;
    }
    else
    {
        return false;
    }
    //return bFlag;
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

/*
for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
           return false;
        }
    }
    return true;
*/

/*

for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            break;
        }
    }
    if(iCnt==(iNo/2)+1)
    {
        return true;
    }
    else
    {
        return false;
    }
*/