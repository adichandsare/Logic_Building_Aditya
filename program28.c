//ACCEPT NO FROM USER AND DISPLAY FACTORS
//INPUT - 10
//OUTPUT - 1 2 5
////////////////////////////////////////
//INPUT - 9
//OUTPUT - 1 3 
////////////////////////////////////////
//INPUT - 17
//OUTPUT - 1
////////////////////////////////////////
//INPUT- 20
//OUTPUT - 1 2 4 5 10
/////////////////////////////////////////
//INPUT - -20
//OUTPUT - 1 2 4 5 10
/////////////////////////////////////////
#include<stdio.h>
void DisplayFactors(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++) 
    {
        if((iNo%iCnt)==0)
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
    DisplayFactors(iValue);
    return 0;
}