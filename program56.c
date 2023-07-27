//ACCEPT TWO NUMBER FROM USER AND PRINT ITS POWER (A RAISE TO B)
//WE USED LONG ,REGISTER , UNSIGNED , SIGNED (JUST ADD UNSIGNED )
#include<stdio.h>
unsigned long int DisplayPower(int iNo1,int iNo2)
{
    register int iCnt=0;
    unsigned long int LMult=1;
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        LMult=LMult*iNo1;
    }
    return LMult;
}
int main()
{
    auto int iValue1=0 , iValue2=0;
    auto unsigned long int LRet=0;
    printf("Enter Base - \n");
    scanf("%d",&iValue1);
    printf("Enter Power - \n");
    scanf("%d",&iValue2);
    
    //printf("Enter Number:\n");
    //scanf("%d \n %d",&iValue1,&iValue2);

    LRet=DisplayPower(iValue1,iValue2);
    printf("Result is : %d",LRet);
    return 0;
}