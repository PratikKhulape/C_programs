/*5.Write a recursive program which display below pattern.
Input : 6
Output : a b c d e f 
Prototype :*/
#include<stdio.h>
void Display(int iNo)
{
    static int iCnt=1;
     static char ch='a';
    if(iCnt<=iNo)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
        Display(iNo); 

    }
}

int main()
{
     int iValue=0;
     char cValue='\0';
	printf("Enter the number\n");
	scanf("%u",&iValue);
	Display(iValue);
	printf("End  of main\n");
	return 0;
}