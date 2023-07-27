/*
-------------------Algorithm--------------------------- 
Start 
accept number for user a no
Check whether the number is negative or not 
if it is negative then make that number as positive
Create one variable as iSum and set it to 0
Create one variable as iCnt and set it to 1
Iterate till Cnt is less than or equal to No
    Add the value of Cnt into the variable Sum
    Increment the value of Cnt by 1
Loop
Display the value of Sum
End
*/

#include<stdio.h>
int Summation(int iNo)
{
    int iSum=0;
    int iCnt=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    return iSum;
}
int main()

{
    int iValue=0;
    int iRet=0;
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet=Summation(iValue);
    printf("Summation is :%d\n",iRet);
    return 0;
}