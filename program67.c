//                  POINTS ON 'N' NUMBER                //
//                          ARRAY                       //
//SAME CODE JUST CHANGED ptr[iCnt](11)
#include<stdio.h>
void Display(int ptr[])
{
    int iCnt=0;
    printf("ELEMENTS OF ARRAY ARE:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);                     
    }
}
int main()
{
    auto int Arr[5];
    register int iCnt=0;

    printf("ENTER ELEMENTS:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    Display(Arr);              
    return 0;
}