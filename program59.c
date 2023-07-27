#include"program59header.h"

int main()
{
    auto int iValue1=0 , iValue2=0;
    auto ULONG LRet=0;
    printf("Enter Base - \n");
    scanf("%d",&iValue1);
    printf("Enter Power - \n");
    scanf("%d",&iValue2);
    
    //printf("Enter Number:\n");
    //scanf("%d \n %d",&iValue1,&iValue2);

    LRet=DisplayPower(iValue1,iValue2);
    printf("Result is : %d",LRet);
    return 0;
}