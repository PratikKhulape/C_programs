/*3.Write a recursive program which display below pattern.
Input : 5
Output : 5 4 3 2 1
Prototype :*/
#include<stdio.h>
 static void Display(int iNo)
{
    // static int iNum=1;
  //static int i=5;
  // iNo=5;
	
    if(iNo>0)
	{
	printf("%d\n",iNo);
	iNo--;
	Display(iNo);//Recurcive call
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