//      PROGRAM ON PATTERN PRINTING      //
//              10-MAY-2022               //

//INPUT - ROW 6         COLUMNS 6
//OUTPUT - 
/*

    *   *   *   *   *   *
    *   *   $   $   $   *
    *   &   *   $   $   *
    *   &   &   *   $   *
    *   &   &   &   *   *
    *   *   *   *   *   *


*/

#include<stdio.h>
void Display(int iRow , int iCol )
{
    int i=0;
    int j=0;
    if(iRow!=iCol)
    {
        return;
    }
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            for(j=1;j<=iCol;j++)
            {
                if( (i==1) || (i==iRow) || (j==iCol)  || (j==1) )
                {
                    printf("*\t");
                }
                else if (i<j)
                {
                    printf("&\t"); 
                }
                else if(i==j)
                {
                    printf("*\t");
                }
                else if(i>j)
                {
                    printf("$\t");
                }
                else
                {
                    printf("&\t");
                }
            }
            printf("\n");
        }   
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
/*
                if( (i==1) || (i==iRow) || (j==iCol)  || (j==1) )
                {
                    printf("*\t");
                }
                else{
                    if(i>j)
                    {
                        printf()
                    }
                }
*/