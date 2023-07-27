#include<stdio.h>
#include<stdbool.h>
bool ChkEven(int iNo)                    //We can use iValue as iNo
{
    if((iNo%2)==0)
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
    bool bRet=false;                    //We can just keep bRet because the default value of bool is false 

    printf("Enter The Number\n");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);
    if(bRet==true)
    {
        printf("%d is Even Number\n",iValue);
    }
    else
    {
        printf("%d is Odd Number\n",iValue);
    }
    return 0;
}