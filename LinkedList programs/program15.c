/*5. Write a program which display largest digits of all element from singly
linear linked list.
Function Prototype :
void DisplayLarge( PNODE Head);
Input linked list : |11|->|250|->|532|->|419|
Output : 1 5 5 9
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
void DisplayLarge( PNODE Head)
 {
  int iMax=0,iDigit=0,iNo=0;
    if(Head==NULL)
    {
        printf("Linked list is empty\n");
        return ;
    }
        
        while(Head!=NULL)
        {
            iNo=Head->Data;
            //iTemp=iNo;
            while(iNo>0)
            {
                iDigit=iNo%10;
                if(iDigit>iMax)
                {
                    iMax=iDigit;
                    
                }
                iNo=iNo/10;
                
            }
        
          
            printf("%d\t",iMax);
          
            iMax=0;
            Head=Head->Next;
        }
     
    //return iMin;

}

int main()
{
   // int iRet=0;
    PNODE First = NULL;
    
    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    DisplayLarge( First);

  // printf("smallest node:%d\n",iRet);
    return 0;
}