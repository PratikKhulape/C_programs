/*3. Write a program which returns addition of all even element from singly
linear linked list.
Function Prototype :
int AdditionEven( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 52
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

 int AdditionEven( PNODE Head)
{
    int iSum = 0;
    if(Head==NULL)
    {
        printf("Linked List is empty");
        return 0;
    }
    
    while(Head!=NULL)
    {
        if((Head->Data%2)==0)
        {
           iSum =iSum+Head->Data;
        }
       
        Head = Head -> Next;
    }
  return iSum;

}

int main()
{
   int  iRet=0;
    PNODE First = NULL;
    
    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);
    iRet=AdditionEven(First);
    printf("Addition of all Even numberis :%d\n",iRet);
    return 0;
}