//ACCEPT N NUMBER AND PRINT HOW MANY TIMES THAT NUMBER IS PRESENT

#include<stdio.h>
#include<stdlib.h>
int CountAccuracy(int Arr[] , int iLength , int iNo)
{
    int iCnt=0,iFrequency=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    int iValue=0;

    printf("Enter How Many Elements :\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize *sizeof(int));

    printf("Enter The Elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter The Element To Calculate The Frequency:\n");
    scanf("%d",&iValue);

    iRet=CountAccuracy(ptr,iSize,iValue);
    printf("Frequency is : %d\n",iRet);
    free(ptr);
    return 0;
}
