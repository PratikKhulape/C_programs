/*1.Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
Input : 79
Output : 15
*/
#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    unsigned int iMask=0xFFFFFFBF;
    unsigned int iResult =0;
    iResult=iNo&iMask;
    return iResult;
}
int main()
{
    unsigned int iValue=0;
    int iRet=0;
    printf("Enter number\n");
    scanf("%u",&iValue);

    iRet=OffBit(iValue);

    printf("%d\n",iRet);
    return 0;
}

