/*5. Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10*/
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

 void SumDigit( PNODE Head)
{
  int iSum=0,iDigit=0,iNo=0;
    if(Head==NULL)
    {
        printf("Linked list is empty\n");
        return ;
    }
        while(Head!=NULL)
        {
            iNo=Head->Data;
            while(iNo>0)
            {
                iDigit=iNo%10;
                iSum=iSum+ (iNo%10);
                iNo=iNo/10;
              
            }
          
            printf("%d\t",iSum);
             iSum=0;
            Head=Head->Next;
        }
     


}

int main()
{
    
    PNODE First = NULL;
    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    SumDigit( First);
    return 0;


}
























