//ACCEPT NO FROM USER AND DISPLAY NON FACTORS 
//INPUT - 10
//OUTPUT - 3 4 6 7 8 9 
#include<stdio.h>
void DisplayNonFactors(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)//iCnt<=iNo-1 
    {
        if((iNo%iCnt)!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter The Number :\n");
    scanf("%d",&iValue);
    DisplayNonFactors(iValue);
    return 0;
}