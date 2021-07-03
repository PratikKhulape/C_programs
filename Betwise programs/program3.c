/*3. Write a program which checks whether 7th & 15th & 21st , 28th bit
is On or OFF.
Solution :
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    unsigned int iMask=0x08104040;
    unsigned int iResult=0;
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
    unsigned int iValue=0;
    BOOL bRet;

    printf("Enter number \n");
    scanf("%u",&iValue);

    bRet=ChkBit(iValue);

    if(bRet==TRUE)
    {
        printf("7th & 15th & 21st , 28th bit is On\n");
    }
    else
    {
        printf("7th & 15th & 21st , 28th bit is OFF\n");
    }
    return 0;
}