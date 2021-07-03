/*5. Write a program which accept string from user reverse that string
in place.

Input : “abcd”

Output : “dcba”

Input : “abba”

Output : “abba”
*/
#include<stdio.h>
void StrRevX(char *str)
{
    int iCnt=0;
    if(str==NULL)
    {
        return;
    }
    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    str--;
    iCnt--;
    while(iCnt>=0)
    {
        printf("%c",*str);
        iCnt--;
        str--;
    }
}

int main()
{
char arr[20];
printf("Enter string\n");
scanf("%[^'\n']s",arr);

StrRevX(arr);

printf("Modified string is %s\n",arr);

return 0;
}