/*4. Write a program which accept one number and position from user and
toggle that bit. Return modified number.
Input : 10 3
Output : 14*/
#include<stdio.h>
//#define false;
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo, int iPos)
{
    unsigned int iMasak=0x00000001;
    unsigned int iResult=0;
    if((iPos<1)||(iPos>32))
    {
        return 0;
    
    }
    iMasak=iMasak<<(iPos-1);
    iResult=iNo^iMasak;
    return iResult;
}
int main()
{
    unsigned int iValue =0,iPos=0,iRet=0;
    printf("Enter Number\n");
    scanf("%u",&iValue);
    printf("Enter position\n");
    scanf("%d",&iPos);

    iRet=ToggleBit(iValue,iPos);
    printf("New number is %u\n",iRet);
    return 0;

}