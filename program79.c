//ACCEPT THE ARRAY NUMBERS AND FIND THE NUMBER IN ARRAY AND RETURN ITS INDEX
//FIRST OCCURANCE
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int SearchFirstOccurance(int Arr[] , int iLength , int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt==iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    int iValue=0;
    bool bRet;

    printf("Enter No Of Elements :\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize *sizeof(int));

    printf("Enter The Elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter The Element To Search:\n");
    scanf("%d",&iValue);

    iRet=SearchFirstOccurance(ptr,iSize,iValue);
    if(iRet == -1)
    {
        printf("There is no such element in array\n");
    }
    else
    {
         printf("Elements first occured at : %d\n",iRet);
    }
    free(ptr);
    return 0;
}
