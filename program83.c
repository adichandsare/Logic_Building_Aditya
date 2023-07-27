//      PROGRAM ON PATTERN PRINTING      //
//              9-MAY-2022               //

//INPUT - 5
//OUTPUT -5     4       3       2       1 

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);
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