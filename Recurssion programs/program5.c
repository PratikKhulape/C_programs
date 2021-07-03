/*5.Write a recursive program which display below pattern.
Output : a b c d e f
Prototype :*/
#include<stdio.h>

/*void Display(unsigned int iNo)
{
     int iCnt=0;
     char ch='a';

     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
         printf("%c\t",ch);
         ch++;
     }

}*/

void Display()
{
    static int iCnt=1;
     static char ch='a';
    if(iCnt<=6)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
        Display(iCnt); 

    }
}
int main()
{
   //unsigned int iValue=0;
  // char cValue='\0';
	//printf("Enter the number\n");
	//scanf("%u",&iValue);
	Display();
	printf("End  of main\n");
	return 0;
}