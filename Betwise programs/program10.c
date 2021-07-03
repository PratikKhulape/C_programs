/*5. Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input : 73
Output : 79
*/
#include<stdio.h>
typedef unsigned int UINT;
UINT OnBit(UINT iNo)
{
    unsigned int iMask=0x0000000F;//Binary=0000 0000 0000 0000 0000 0000 0000 1111
    unsigned int iResult =0;
    
    iResult=iNo|iMask;
    return iResult;
}
int main()
{
      unsigned int iValue=0;
    int iRet=0;
    printf("Enter number \n");
    scanf("%u",&iValue);

    iRet=OnBit(iValue);
    printf("%d\n",iRet);
    return 0;

}    