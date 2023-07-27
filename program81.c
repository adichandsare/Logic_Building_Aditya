//      PROGRAM ON PATTERN PRINTING      //
//              9-MAY-2022               //

//INPUT  - 5
//OUTPUT - *    *   *   *   *

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
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