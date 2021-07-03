/*4. Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : TRUE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef unsigned int BOOL;
typedef unsigned int UINT;
BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    unsigned int iMask1 = 0X00000001, iMask2 = 0X00000001;
    unsigned int iResult = 0;
    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {   return FALSE;}
    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);

     if((iNo&iMask1==iMask1)||(iNo&iMask2==iMask2))
    {return TRUE;}
    else
    {return FALSE;}
}
int main()
{
    unsigned int iValue = 0,iPos1 = 0,iPos2 = 0;
    BOOL bRet;
    printf("Enter number\n");
    scanf("%u",&iValue);
    printf("Enter first position\n");
    scanf("%d",&iPos1);
    printf("Enter second position\n");
    scanf("%d",&iPos2);
    bRet = ChkBit(iValue,iPos1,iPos2);
    if(bRet == TRUE)
    {printf("Bits are on\n");}
    else
    {printf("Bits are off\n");}
    return 0;
}


