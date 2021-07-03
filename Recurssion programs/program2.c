/*2. Write a recursive program which display below pattern.
Output : 1 2 3 4 5
Prototype :*/
#include<stdio.h>
/*void DisplayI()
{
    int iNo=0;
    while(iNo<=5)
	{
	printf("%d\n",iNo);
	iNo++;

	}
}*/
void DisplayR()
{
    static int iNum=1;
    if(iNum<=5)
	{
	printf("%d\n",iNum);
	iNum++;
	DisplayR();//Recurcive call
	}

}
int main()
{
  //  int iValue=0;
	//printf("Enter the number\n");
	//scanf("%d",&iValue);
	//DisplayR(iValue);
	DisplayR();
	printf("End  of main\n");
	return 0;
}