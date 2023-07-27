//ACCEPT THE NUMBER AND CECK WHETHER NUMBER IS ARMSTRONG OR NOT 
#include<stdio.h>
#include<stdbool.h>

bool CheckArmStrong(int iNo)
{
    int iDigCnt=0;
    int iTemp=0;
    int iDigit=0;
    int iSum=0;
    int iCnt=0;
    int iMult=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    iTemp=iNo;
    //CALCULATE NUMBER OF DIGITS
    while(iNo!=0)
    {
        iDigCnt++;
        iNo=iNo/10;
    }
    iNo=iTemp;

    while(iNo!=0)
    {
        iMult=1;
        iDigit=iNo%10;
        for(iCnt=1;iCnt<=iDigCnt;iCnt++)
        {
            iMult=iMult*iDigit;
        }
        iSum=iSum+iMult;
        iNo=iNo/10;
    }
    if(iSum==iTemp)
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
    bool bRet;
    printf("ENTER THE NUMBER : \n");
    scanf("%d",&iValue);
    bRet=CheckArmStrong(iValue);
    if(bRet==true)
    {
        printf("%d is a Armstrong Number\n",iValue);
    }
    else
    {
        printf("%d is not a Armstrong Number\n",iValue);
    }
    return 0;
}

//      PROBLEMS ON NUMBERS         //
//      THINGS TO READ              //
//ARRAY
//ARRAY AND POINTER
//DYNAMIC MEMORY ALLOCATION
//MALLOC
//FREE
//LOOPS
//FOR LOOP