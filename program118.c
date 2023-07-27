//                  DATA STRUCTURE                  //
//                   11-MAY-2022                    //
//Singly Linear Linked List
/*
InsertFirst
InsertLast
InsertAtPosition
DeleteFirst
DeleteLast
DeleteAtPosition
Display
Count
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data; //4 bytes
    struct node *next; //pointer mhnun 8 so totally 12 bytes

};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
/*
    1.ALLOCATE MEMORY FOR NODE
    2.INITIALISE THE NODE
    3.CHECK WHETHER LL IS EMPTY OR NOT
    4.IF LL IS EMPTY THE NEW NODE IS THE FIRST NODE
    5.IF LL CONTAIN ATLEAAST ONE NODE THEN IT STORE THE ADDRESS OF PREVIOUS FIRST 
    NODE IN THE NEXT POINTER OF NEW NODE
*/

void InsertFirst(PPNODE Head , int iNo)
{
    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;
    if(*Head==NULL) //IF LL IS EMPTY
    {
        *Head=newn;
    }
    else            //IF LL COTAINS AT LEAST ONE NODE
    {
        newn->next=*Head;
        *Head=newn;
    }
    printf("\n");
}
void Display(PNODE Head)
{
    
}
int main()
{
    PNODE First=NULL; //struct node *First=NULL
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    return 0;
}
/*
Rules:
	1.Use only dynamic memory allocations
	2.Don't write any technical syntax in main
	3.Don't use only global variables
    4.Be Careful while manipulating the first pointer
    5.Pass The First Pointer Directly if the function is not going to modify the Linked List 
    6.Pass the address of a first pointer if the function is going to modify the Linked List
    (InsertFirst,InsertLast,InsertAtPos,DeleteFirst,DeleteLast,DeleteAtPos,Display,Count)

*/

