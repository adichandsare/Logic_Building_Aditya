//ACCEPT N NUMBERS AND ACCEPT AND DO THE ADDITION OF THAT NUMBERS
//INPUT - 2 4 
//OUTPUT - 8

#include<stdio.h>
#include<stdlib.h>
int DisplaySum(int Arr[],int iLength)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
            iSum=iSum+Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int *ptr=NULL;
    int iRet=0;

    printf("ENTER HOW MANY ELEMENTS YOU WANT TO ENTER:\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    printf("ENTER THE ELEMENTS:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=DisplaySum(ptr,iSize);
    printf("ADDITION OF THE NUMBER IS : %d\n",iRet);
    free(ptr);
    return 0;
}