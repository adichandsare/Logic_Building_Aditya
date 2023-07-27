//DIVISIBLE BY 3 AND 5 
#include<stdio.h>
#include<stdbool.h>
bool ChkEven(int iNo)                    
{
    if(
        ((iNo%3)==0) && 
        ((iNo%5)==0))
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
    bool bRet=false;                    

    printf("Enter The Number\n");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);
    if(bRet==true)
    {
        printf("%d is Divisible by 3 & 5\n",iValue);
    }
    else
    {
        printf("%d is Not Divisible by 3 & 5\n",iValue);
    }
    return 0;
}