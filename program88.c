//      PROGRAM ON PATTERN PRINTING      //
//              9-MAY-2022               //

//INPUT - 6
//OUTPUT - 1    *   3   *   5   *

//INPUT - 5
//OUTPUT - 1    *   3   *   5

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("*\t",iCnt);
        }
        else
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter The Value:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
