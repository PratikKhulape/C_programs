/*1. Write a program which search first occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :
int SearchFirstOcc( PNODE Head , int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3
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

int SearchFirstOcc( PNODE Head , int iNo )
{
    int iPos=0;

    if(Head==NULL)
    {
        printf("Linked list is empty\n");
        return 0;
    }
    
    while(Head!=NULL)
    {
        iPos++;//index++;

       if((Head->Data)==iNo)
       {
        break;//iPos=index;
       } 
       Head=Head->Next;
    }
    
    if(Head==NULL)//iPos==0;
    {
        return-1;
    }
    else
    {
        return iPos;
    }

}

int main()
{
    
    int iValue=0;
    int iRet=0;
    PNODE First = NULL;
    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 40);
    InsertFirst(&First, 50);
    InsertFirst(&First, 30);
    InsertFirst(&First, 70);
    printf("Enter the element that you want to serach \n");
    scanf("%d",&iValue);


    iRet=SearchFirstOcc(First,iValue);
    if(iRet==-1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurence is at %d\n",iRet,iValue);
    }

    return 0;
}