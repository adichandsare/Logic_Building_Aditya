//ACCEPT NO FROM USER AND DISPLAY FACTORS AND ITS ADDITION
//INPUT - 10
//OUTPUT - 1 2 5 
//ADDITION IS 8

#include<stdio.h>
int SumFactors(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iSum=0;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            //printf("%d\t\n",iCnt);
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter The Number :\n");
    scanf("%d",&iValue);

    iRet=SumFactors(iValue);
    printf("Addition of Factors is : %d\n",iRet);
    return 0;
}