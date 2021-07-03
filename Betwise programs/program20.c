/*5. Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.
*/
#include<stdio.h>

typedef unsigned int UINT;
UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
 UINT iMask=0x00000001;
 UINT iResult=0;

 iMask=  iMask<<(iStart-1);

 for(int i=iStart;i<=iEnd;i++)
 {
     iResult=iNo ^ iMask;    //  0000 0000 0000 0000 0000 0000 0001 0000 
     iMask=iMask<<1;
 }

 return iResult;


}
int main()
{
    unsigned int iValue = 0,iRet=0;
    int iStart = 0,iEnd=0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    printf("Enter position\n");
    scanf("%d",&iStart);
    printf("Enter position\n");
    scanf("%d",&iEnd);
    iRet = ToggleBitRange(iValue,iStart,iEnd);
    printf("Updated number is : %u\n",iRet);
    return 0;
}














