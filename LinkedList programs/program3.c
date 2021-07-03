/*3. Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :
int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
struct node
{
    int Data;
    struct node *Next;
}; 
    typedef struct node NODE;
    typedef struct node* PNODE;
    typedef struct node** PPNODE;

void InsertFirst(PPNODE Head , int no )
{
     PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->Next = NULL;
    newn->Data = no;
    if (*Head == NULL)
     {
        *Head = newn;
     }
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }

}

int Addition( PNODE Head)
{
  int iSum=0;
    if(Head==NULL)
    {
        printf("Linked list is empty\n");
        return 0;
    }
        while(Head!=NULL)
        {
            iSum=iSum+ Head->Data;
            Head=Head->Next;
        }
     
    return iSum;

}

int main()
{
    
    int iRet=0;
    PNODE First = NULL;
    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 40);
    InsertFirst(&First, 50);
    InsertFirst(&First, 30);
    InsertFirst(&First, 70);
    
    iRet=Addition(First);

    printf("Addition of all the node is :%d\n",iRet);
    return 0;
}