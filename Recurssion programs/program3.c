/*3.Write a recursive program which display below pattern.
Output : 5 4 3 2 1
Prototype :*/
#include<stdio.h>

void Display()
{
	static int iNo=5;
    if(iNo>=1)
	{
	printf("%d\n",iNo);
	iNo--;
	Display();//Recurcive call
	}
}
int main()
{
	//int iValue=0;
	//printf("Enter the number\n");
	//scanf("%d",&iValue);
	//DisplayR(iValue);
	Display();
	printf("End  of main\n");
	return 0;	
}