//                  DATA STRUCTURE                  //
//                   11-MAY-2022                    //
//SAME CODE
#include<stdio.h>
#include<stdlib.h>
//STRUCTRE DECLARATION
struct node
{
    int data;
    struct node*next;
};
typedef struct node NODE;
typedef struct node * PNODE;
//JUNA NAV          NAWIN NAV
//STRUCT NODE           NODE
//STRUCT NODE*          PNODE
int main()
{
    //STATIC MEMORY ALLOCATION
    NODE obj;
    //DYNAMIC MEMORY ALLOCATION
    PNODE*ptr=(PNODE*)malloc(sizeof(NODE));
    obj.data=11;    //DIRECT ACCESING OPERATOR '.'
    obj.next=NULL;
    ptr->data=11;   //INDIRECT ACCCESSING OPERATOR '->'
    ptr->next=NULL;
    return 0;
}
