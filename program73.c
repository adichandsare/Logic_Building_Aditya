//ACCEPT N NUMBER FROM USER AND PRINT THE LARGEST NUMBER FROM THAT ELEMENT
//INPUT - 10    15      7       6       9       2
//OUTPUT - 15
//POSITIVE WORKS

#include<stdio.h>
#include<stdlib.h>
int DisplayLargest(int Arr[] , int iLength)
{
    int iCnt=0;
    int iMax=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
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
    iRet=DisplayLargest(ptr,iSize);
    printf("Largest Element is : %d\n",iRet);
    free(ptr);
    return 0;
}