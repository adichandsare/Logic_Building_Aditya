//                  POINTS ON 'N' NUMBER                //
//                          ARRAY                       //

#include<stdio.h>
int main()
{
    //ARR IS ONE DIMENTIONAL ARRAY
    //WHICH CONTAIN 5 ELEMENTS 
    //AND EACH ELEMENTS IS OF TYPE INT 

    int Arr[5];
    printf("ENTER ELEMENTS:\n");
    
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("ELEMENTS OF ARRAY ARE:\n");

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);
    printf("%d\n",Arr[4]);

    return 0;
}

/*
    0       1       2       3   
    ----------------------------------------
    |11       |21       |51     |101       |               
    -----------------------------------------
    100         104      108     112        116
*/