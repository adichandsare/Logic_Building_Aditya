//ACCEPT N NUMBER FROM USER AND PRINT THE SMALLEST NUMBER FROM THAT ELEMENT
//SMALLEST
//TIME COMPLEXITY IS N
#include<stdio.h>
#include<stdlib.h>
int DisplaySmallest(int Arr[] , int iLength)
{
    int iCnt=0;
    int iMin=Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;

    printf("Enter How Many Elements :\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize *sizeof(int));

    printf("Enter The Elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=DisplaySmallest(ptr,iSize);
    printf("Smallest Element is : %d\n",iRet);
    free(ptr);
    return 0;
}