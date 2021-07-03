/*4. Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.
Input : 137
Output : 713
*/
#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    unsigned int iMask=0x00000240;//Binary=0000 0000 0000 0000 0000 0010 0100 0000
    unsigned int iResult =0;
    iResult=iNo^iMask;
    return iResult;
}
int main()
{
      unsigned int iValue=0;
    int iRet=0;
    printf("Enter number \n");
    scanf("%u",&iValue);

    iRet=ToggleBit(iValue);
    printf("%d\n",iRet);
    return 0;

}    