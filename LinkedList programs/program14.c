/*4. Write a program which display smallest digits of all element from singly
linear linked list.
Function Prototype :
void DisplaySmall( PNODE Head);
Input linked list : |11|->|250|->|532|->|415|
Output : 1 0 2 1
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
void DisplaySmall( PNODE Head)
 {
  int iMin=9,iDigit=0,iNo=0;
    if(Head==NULL)
    {
        printf("Linked list is empty\n");
        return ;
    }
        
        while(Head!=NULL)
        {
           
            iNo=Head->Data;// iMin=Head->data;
            //iTemp=iNo;
            while(iNo>0)
            {
                iDigit=iNo%10;
                if(iDigit<iMin)
                {
                    iMin=iDigit;
                    
                }
                iNo=iNo/10;
                
            }
        
          
            printf("%d\t",iMin);
          
            iMin=9;
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
     DisplaySmall( First);
  // printf("smallest node:%d\n",iRet);
    return 0;
}