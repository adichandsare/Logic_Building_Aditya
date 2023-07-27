//      PROGRAM ON PATTERN PRINTING      //
//              10-MAY-2022              //

//INPUT - ROW 4         COLUMNS 4
//OUTPUT - 
/*
    A   A   A   A   
    B   B   B   B   
    C   C   C   C   
    D   D   D   D   
*/

#include<stdio.h>
void Display(int iRow , int iCol )
{
    int i=0;
    int j=0;
    char ch='\0';
    for(i=1,ch='A';i<=iRow;i++,ch++)
    {
        for(j=1      ;j<=iCol;     j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }     
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter No Of Rows:\n");
    scanf("%d",&iValue1);
    printf("Enter No Of Columns:\n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}