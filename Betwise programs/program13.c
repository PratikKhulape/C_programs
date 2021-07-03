/*3. Write a program which accept one number and position from user and on
that bit. Return modified number.
Input : 10 3
Output : 14*/
#include<stdio.h>
//#define false;
typedef unsigned int UINT;
UINT OnBit(UINT iNo, int iPos)
{
    unsigned int iMask=0x00000001;//BInary : 0000 0000 0000 0000 0000 0000 0001 0000
    unsigned int iResult=0;
    if((iPos<1)||(iPos>32))  //1 1 1 0 1 1 1 1
                            // 0 0 0 1 0 0 0 0
    {
        return 0;
    }
    iMask=iMask<<(iPos-1);
    iResult=iNo|iMask;

    return iResult;
}
int main()
{
    unsigned int iValue =0,iPos=0,iRet=0;
    printf("Enter Number\n");
    scanf("%u",&iValue);
    printf("Enter position\n");
    scanf("%d",&iPos);

    iRet=OnBit(iValue,iPos);
    printf("New number is %u\n",iRet);
    return 0;

}
