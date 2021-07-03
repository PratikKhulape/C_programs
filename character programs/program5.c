/*5. Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/
#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv<'A')||(chDiv>'D'))
    {
        printf("Invalid ChDiv\n");
        return;

    }
    if(chDiv=='A')
    {
        printf("Your exam time at 7.00 AM\n");
    }
    else if(chDiv=='B')
    {
        printf("Your exam time at 8.30 AM\n");
    }
    else if(chDiv=='C')
    {
        printf("Your exam time at 9.20 AM\n");
    }
    else if(chDiv=='D')
    {
        printf("Your exam time at 10.30 AM\n");
    }
    

}
int main()
{
char cValue = '\0';
printf("Enter your devision\n");
scanf(" %c",&cValue);
DisplaySchedule(cValue);
return 0;
}