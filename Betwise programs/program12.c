/*2. Write a program which accept one number and position from user and off
that bit. Return modified number.
Input : 10 2
Output : 8*/
#include<stdio.h>
//#define false;
typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    unsigned int iMask=0x000000FF;
    unsigned int iResult=0;
    if((iPos<1)||(iPos>32))
    {
        return 0;
    }
    iMask=iMask<<(iPos-1);
    iMask=~iMask;
    iResult=iNo&iMask;

    return iResult;
}
int main()
{
    unsigned int iValue =0,iPos=0,iRet=0;
    
    printf("Enter Number\n");
    scanf("%u",&iValue);
    printf("Enter position\n");
    scanf("%d",&iPos);

    iRet=OffBit(iValue,iPos);
    printf("New number is %u\n",iRet);
    return 0;
}
