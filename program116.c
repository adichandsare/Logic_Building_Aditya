//                  DATA STRUCTURE                  //
//                   11-MAY-2022                    //
//SAME CODE JUST REPLACE NODE TO Struct node
#include<stdio.h>
#include<stdlib.h>
//STRUCTRE DECLARATION
struct node
{
    int data;
    struct node*next;
};
typedef struct node NODE;
int main()
{
    //STATIC MEMORY ALLOCATION
    NODE obj;
    //DYNAMIC MEMORY ALLOCATION
    NODE*ptr=(NODE*)malloc(sizeof(NODE));
    obj.data=11;    //DIRECT ACCESING OPERATOR '.'
    obj.next=NULL;
    ptr->data=11;   //INDIRECT ACCCESSING OPERATOR '->'
    ptr->next=NULL;
    return 0;
}
