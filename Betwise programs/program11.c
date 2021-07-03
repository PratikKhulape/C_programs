/*1.Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
Input : 10 2
Output : TRUE*/
#include<stdio.h>
#include<stdbool.h>
typedef unsigned  int UINT;
typedef  int BOOL;
#define TRUE 1
#define FALSE 0

bool ChkBit(unsigned int iNo, int iPos)
{

    unsigned int iMask=0x00000001;
    unsigned int iResult=0;
    if((iPos<1)||(iPos>32))
    {
        return FALSE;
    }
    iMask=iMask<<(iPos-1);
    iResult=iNo&iMask;
    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}
int main()
{
    unsigned int iValue=0,iPos=0;
    bool bRet;
    
    printf("Enter Number\n");
    scanf("%u",&iValue);
    printf("Enter position\n");
    scanf("%d",&iPos);

    bRet=ChkBit(iValue,iPos);

    if(bRet==TRUE)
    {
        printf("bit position is on\n");
    }
    else
    {
        printf("bit position is off\n");
    }
    return 0;

}
