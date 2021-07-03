/*1. Write a recursive program which display below pattern.
Output : * * * * *
Prototype :*/
#include<stdio.h>
/*void DisplayI()
{
	int i=0;//local variable
	// 1     2   3
	for(i=1;i<=4;i++)
	{
	printf("*\n");//4
	
	}

}*/
void DisplayR()
 
{
    static int i=1;//1
   
    if(i<=5)//2
    {
        printf("*\n");//4
        i++;          //3
        DisplayR();//Recursive call
    }

}
int main()
{
DisplayR();
//DisplayI();
printf("End of main\n");
return 0;
}