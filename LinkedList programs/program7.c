/*Write a program which displays all elements which are prime from singly
linear linked list.
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89 */

#define TRUE 1
#define FALSE 0
typedef int BOOL; 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,  int No)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = No;
    newn->Next = NULL;
    
    if(*Head == NULL)       // LL is empty
    {
        *Head = newn;
    }
    else                            // LL contains atleast one node
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void DisplayPrime( PNODE Head)
{
    
    int iCnt = 0,iNo=0;
    printf("INside DIsplayprime function\n");
    if(Head==NULL)
    {
        printf("Linked List is empty\n");
        return;
    }
    
    while(Head!=NULL)
    {
        iNo = Head->Data;
        
        for(iCnt=2;iCnt<=iNo/2;iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                break;
            }

        }
        if((iCnt==(iNo/2)+1))
        {
            printf("%d\n",iNo);
        }
        Head = Head -> Next;

    }

    
    
}

int main()
{
    int iRet = 0,iValue = 0;
    PNODE First = NULL;
    
    InsertFirst(&First,11);     
    InsertFirst(&First,20);
    InsertFirst(&First,17);
    InsertFirst(&First,41);
    InsertFirst(&First,22);
    InsertFirst(&First,89);
   
    // printf("Actual nodes\n");
    // Display(First);
    
    DisplayPrime(First);
    
    
    return 0;
}
    