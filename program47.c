//PROBLEMS ON DIGITS
//ACCEPT THE NUMBER AND PRINT SEPRATE NO
//INPUT - 7856
//OUTPUT - 
//6
//5
//8
//7

#include<stdio.h>
void DisplayDigits(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
}
int main()
{
    int iValue=0;
    printf("Enter The Number\n");
    scanf("%d",&iValue);
    DisplayDigits(iValue);
    return 0;
}