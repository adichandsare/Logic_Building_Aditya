/*
0-35 FAIL
35-50 PASS CLASS
50-60 SECOND CLASS
60-70 FIRST CLASS
70-100 FIRST CLASS WITH DISTINCTION
*/
#include<stdio.h>
void DisplayClass(float fMarks)
{
    if((fMarks > 0.0) && (fMarks < 35.0))
    {
        printf("YOU ARE FAILED !\n");
    }
    else if((fMarks >= 35.0) && (fMarks < 50.0))
    {
        printf("PASS CLASS !\n");
    }
    else if((fMarks >= 50.0) && (fMarks < 60.0))
    {
        printf("SECOND CLASS !\n");
    }
    else if((fMarks >= 60.0) && (fMarks < 70.0))
    {
        printf("FIRST CLASS !\n");
    }
    else if((fMarks >= 70.0) && (fMarks <= 100.0))
    {
        printf("FIRST CLASS WITH DISTINCTION !\n");
    }
    else
    {
        printf("INVALID MARKS\n");
    }
}
int main()
{
    float fValue=0.0;
    printf("Enter The Percentage:\n");
    scanf("%d",&fValue);
    DisplayClass(fValue);
    return 0;
}
