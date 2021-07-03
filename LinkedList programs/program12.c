/*2. Write a program which display all palindrome elements of singly linked
list.
Function Prototype :
void DisplayPallindrome( PNODE Head);
Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414
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
 void DisplayPallindrome( PNODE Head)
{
  int iRev=0,iDigit=0,iNo=0,iTemp=0;
    if(Head==NULL)
    {
        printf("Linked list is empty\n");
        return ;
    }
        while(Head!=NULL)
        {
            iNo=Head->Data;
            iTemp=iNo;
            while(iNo>0)
            {
                iDigit=iNo%10;
                iRev=(iRev*10)+iDigit;
                iNo=iNo/10;
              
            }
          if(iRev==iTemp)
          {
            printf("%d\t",iRev);
          }  
             iRev=0;
            Head=Head->Next;
        }
     


}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 101);
    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
     DisplayPallindrome( First);

    return 0;
}