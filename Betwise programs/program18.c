/*3. Write a program which accept one number from user and check whether
9th or 12th bit is on or off.
Input : 257
Output : TRUE
*/
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
    unsigned int iMask1 = 0X00000100;  //0000    0000       0000     0000        0000    0001        0000        0000
    unsigned int iMask2=0x00000800; // 0000      0000       0000     0000        0000    1000        0000        0000
    unsigned int iResult = 0;
    if((iNo&iMask1==iMask1)||(iNo&iMask2==iMask2))
   
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
    unsigned int iValue = 0;
    bool bRet;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    bRet = ChkBit(iValue);
    
    if(bRet == TRUE)
    {
        printf(" one of the bits is on\n");
    }
    else
    {
        printf(" both the Bits is off\n");
    }
    return 0;
}

