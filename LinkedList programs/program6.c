/*1. Write a program which displays all elements which are perfect from singly
linear linked list.
Function Prototype :
int DisplayPerfect( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28
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

 void DisplayPerfect( PNODE Head)
{
    int isum = 0,iCnt=0,iNo=0;
    if(Head==NULL)
    {
        printf("Linked List is empty");
        return ;
    }
    
    while(Head!=NULL)
    {
        iNo = Head->Data;
        for(iCnt=1;iCnt<=iNo/2;iCnt++)
        {
                if((iNo%iCnt)==0)
            {
                isum = isum + iCnt;

            }
        }
        if(isum==iNo)
        {
            printf("%d\n",iNo);
        }
        isum = 0;
        Head = Head -> Next;
    }
  

}
int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    DisplayPerfect(First);
    return 0;
}