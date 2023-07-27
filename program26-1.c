/*
0 to 35  Fail
35 to 50   Pass class
50 to 60   Second Class
60 to 70    First class
70 to 100  First lass with distinction
*/


#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks >0.0 )&& (fMarks< 35.0))
    {
        printf("You are fail\n");
    }
    else if((fMarks >=35.0)&&(fMarks <50.0))
    {
        printf("You are Pass class\n");
    }
    else if((fMarks >=50.0)&&(fMarks <60.0))
    {
        printf("You are Second Class\n");
    
    }
    else if((fMarks >=60.0)&&(fMarks<70.0))
    {
        printf("You are First Class\n");
    }

    else if((fMarks >=70.0) && (fMarks <=100.0)) //
    {
        printf("First class with distinction\n");
    }
}

int main()
{
    float fValue =0.0;

    printf("Enter the percentage\n");
    scanf("%f",&fValue);
    
    DisplayClass(fValue); //function la call kartoy,
    return 0;
}