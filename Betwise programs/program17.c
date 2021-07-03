/*2. Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4
*/
#include<stdio.h>
typedef unsigned int UINT;
void CommonBits(UINT iNo1, UINT iNo2)
{
 UINT iMask=0x00000001;
 int i=0;
for(i=1;i<=32;i++)
{

    if(((iNo1&iMask)==iMask)&&((iNo2&iMask)==iMask))
    {
      
        printf("%d\t",i);
    }
  
    iMask=iMask<<1;
}



}
int main()
{
   
    UINT iValue1 = 0,iValue2=0;
    
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    printf("Enter second number\n");
    scanf("%d",&iValue2);
    CommonBits(iValue1,iValue2);
   
    return 0;
}