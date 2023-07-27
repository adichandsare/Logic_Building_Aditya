//ARRAY PROGRAM FINDING EVEN NUMBER IN ARRAY
//STEPS AT THE END OF CODE 
#include<stdio.h>
#include<stdlib.h>
void DisplayEven(int Arr[],int iLength)
{
    int iCnt=0;
    printf("EVEN ELEMENTS ARE:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int *ptr =NULL;

    printf("ENTER NUMBER OF ELEMENTS:\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize *sizeof(int));

    printf("ENTER THE ELEMENTS:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    DisplayEven(ptr,iSize);
    free(ptr);
    return 0;
}

/*

----------------------------------------------------------------------|
    STEPS TO SOLVE PROBLEMS ON N NUMBERS                              |
----------------------------------------------------------------------|
    STEP1: ACCEPT THE SIZE ODF ARRAY                                  |
    STEP2: ALLOCATE THE MEMORY DINAMICALLY FOR THAT ARRAY             |
    STEP3: ACCEPT THE VALUE FROM USER AND STORE IN THE ARRAY          |
    STEP4: PASS THAT ARRAY AND SIZE TO THE FUNCTION(LOGIC)            |
    STEP5: DEALLOCATE MEMORY OF THAT ARRAY                            |
----------------------------------------------------------------------|

*/