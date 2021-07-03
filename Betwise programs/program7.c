/*2. Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number.
Input : 577
Output : 1
*/
#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    unsigned int iMask=0xFFFFFDBF;
    unsigned int iResult=0;
    iResult=iNo&iMask;
    return iResult;
}
int main()
{
    unsigned int iValue=0;
    int iRet=0;
    printf("Enter number \n");
    scanf("%u",&iValue);

    iRet=OffBit(iValue);
    printf("%d\n",iRet);
    return 0;
}