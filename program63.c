//                  POINTS ON 'N' NUMBER                //
//                          ARRAY                       //

#include<stdio.h>
int main()
{
    auto int Arr[5];
    register int iCnt=0;

    printf("ENTER ELEMENTS:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("ELEMENTS OF ARRAY ARE:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
    return 0;
}

/*
    0           1             2           3   
    ----------------------------------------
    |11       |21       |51      |101       |               
    -----------------------------------------
    100        104      108       112       116
*/