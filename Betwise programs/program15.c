/*15. Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)
*/
#include<stdio.h>
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{
    unsigned int iMask=0x80000001;
    unsigned int iResult=0;
    iResult=iNo^iMask;

    return iResult;
}
int main()
{
    unsigned int iValue =0,iRet=0;
    printf("Enter Number\n");
    scanf("%u",&iValue);
    

    iRet=ToggleBit(iValue);
    printf("New number is %u\n",iRet);
    return 0;

}