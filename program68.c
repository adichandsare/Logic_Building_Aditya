//                  POINTS ON 'N' NUMBER                //
//                          ARRAY                       //
//SAME CODE JUST CHANGED ptr to Arr (5,11) and no use of pointer
#include<stdio.h>
void Display(int Arr[])
{
    int iCnt=0;
    printf("ELEMENTS OF ARRAY ARE:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);                     
    }
}
int main()
{
    auto int Brr[5];
    register int iCnt=0;

    printf("ENTER ELEMENTS:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    Display(Brr);              
    return 0;
}