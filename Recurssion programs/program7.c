/*2. Write a recursive program which display below pattern.
Input : 5
Output : 1 2 3 4 5
Prototype :*/
#include<stdio.h>

void Display(int iNo)
{
   static int iNum=1;
    if(iNum<=iNo)
    {
        printf("%d\n",iNum);
        iNum++;
        Display(iNo);
    }
}
int main()
{
    int iValue = 0;
 printf("Enter number\n");
 scanf("%d",&iValue);
 Display(iValue);
return 0;
}