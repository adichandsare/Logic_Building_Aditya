//ACCEPT TWO NUMBER FROM USER AND PRINT ITS POWER (A RAISE TO B)
//INPUT - 2 AND 3 
//OUTPUT - 8 (2*2*2)
//INPUT - 2 AND 4 (2*2*2*2) 
//OUTPUT - 16
/*
START
    ACCEPT ONE NUMBER
    ACCEPT TWO NUMBER

    CREATE ONE VARIABLE AS MULT
    SET THE VALUE 1 IN THE VARIABLE MULT

    CREATE ONE COUNTRE AS CNT
    SET COUNTER TO 1

    ITRETE TILL THE COUNTER IS LESS THAN OR EQUAL TO NO2
        MULT = MULT * NO1
        INCREMENT THE COUNTER BY 1
    CONTINUE (GOTO LOOP)
    DISPLAY THE VALUE OF MULT
END
*/

#include<stdio.h>
int DisplayPower(int iNo1,int iNo2)
{
    int iCnt=1;
    int iMult=1;
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        iMult=iMult*iNo1;
    }
    return iMult;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;
    printf("Enter Base - \n");
    scanf("%d",&iValue1);
    printf("Enter Power - \n");
    scanf("%d",&iValue2);
    //printf("Enter Number:\n");
    //scanf("%d \n %d",&iValue1,&iValue2);

    iRet=DisplayPower(iValue1,iValue2);
    printf("Result is : %d",iRet);
    return 0;
}