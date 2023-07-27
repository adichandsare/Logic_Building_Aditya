//CODE WITH USING MALLOC AND WE TAKE INPUT THAT HOW MANY ELEMENTS YOU WANT
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[] , int iLength)
{
    int iCnt=0;
    printf("ELEMENTS OF ARRAY ARE:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);                     
    }
}
int main()
{
    //auto int Brr[5]; THIS WAS STATIC MEMORY ALLOCATION
    int *ptr=NULL;
    int iSize=0;
    int iCnt=0;

    printf("ENTER THE NUMBER OF ELEMENT:\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int)); //M FOR MEMORY ALLOC FOR ALLOCATION
    
    printf("ENTER ELEMENTS:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    Display(ptr , iSize);   
    free(ptr);           
    return 0;
}

//FREE(PTR)
//ALLOCATE THE MEMORY
//USE THE MEMORY
//DEALLOCATE THE MEMORY