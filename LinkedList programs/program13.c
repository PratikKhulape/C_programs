/*3. Write a program which display product of all digits of all element from
singly linear linked list. (Don’t consider 0)
Function Prototype :
void DisplayProduct( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 1 2 6 4
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
 int DisplayProduct( PNODE Head)
 {
  int iMult=1,iDigit=0,iNo=0;
    if(Head==NULL)
    {
        printf("Linked list is empty\n");
        return 0;
    }
        
        while(Head!=NULL)
        {
            iNo=Head->Data;
            iMult=1;
            while(iNo>0)
            {
                iDigit=iNo%10;
                if(iDigit!=0)
                {
                    iMult=iMult*iDigit;
                    
                }
                iNo=iNo/10;
                
            }
        
          
            printf("%d\t",iMult);
          
            //iMult=1;
            Head=Head->Next;
        }
     
    return iMult;

}

int main()
{
    int iRet=0;
    PNODE First = NULL;
    
    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
   iRet= DisplayProduct( First);
   printf("MUltipliction of node:%d\n",iRet);
    return 0;
}