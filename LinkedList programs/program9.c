/*4. Write a program which return second maximum element from singly linear
linked list.
Function Prototype :
int SecMaximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 240
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

 int SecMaximum( PNODE Head)
{
    int iMax1=0,iMax2=0,iNo=0;
    if(Head==NULL)
    {
        printf("Linked list is empty\n");
        return 0 ;
    }
      while(Head!=NULL) //   |110|->|230|->|320|->|240|
    {
            iNo=Head->Data;
            if(iNo>iMax1)//
            {
            iMax2= iMax1;
            iMax1=iNo;
            }
            else if((iNo>iMax2)&&(iNo<iMax1))
            {
                iMax2=iNo;
            }
            Head=Head->Next;
    }
     
    return iMax2;
}

int main()
{
   int  iRet=0;
    PNODE First = NULL;
    
    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    iRet=SecMaximum(First);
    printf("SecMaximum node is :%d\n",iRet);
    return 0;
}