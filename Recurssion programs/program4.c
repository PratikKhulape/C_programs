/*4.Write a recursive program which display below pattern.
Output : A B C D E F
Prototype :*/
#include<stdio.h>

/*void Display(unsigned int  iNo)
{
    int iCnt=0;
    char ch='A';
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
}*/
void Display()
{
    static int iCnt=1;
     static char ch='A';
    if(iCnt<=26)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
        Display(); 

    }
}

int main()
{
   //unsigned int iValue=0;
   //char cValue='\0';
	//printf("Enter the number\n");
	//scanf("%u",&iValue);
	Display();
	printf("End  of main\n");
	return 0;
}