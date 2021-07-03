/*1. Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
Prototype :*/
#include <stdio.h>

/*void Display(int iNo)
{
    int iCnt =0;

    printf("\n");
//        1        2      3
    for (iCnt=iNo;iCnt>=1;iCnt--)

    {
        printf("*\t %d\t ",iCnt);//4

    }
    printf("\n");

}*/


void Display(int iNo)
{

     //int iCnt=0;
     
    if(iNo>0)//1
    {

        
        printf("*\t %d\t",iNo);//4
        iNo--;//3
        Display(iNo);

    }


}
int main()
{
    int iValue=0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    printf("End of main\n");

    return 0;


}