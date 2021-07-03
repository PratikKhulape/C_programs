/*3.Write a program which accept string from user and toggle the case.

Input : “Marvellous Multi OS”

Output : mARVELLOUS mULTI os
*/
#include<stdio.h>
void strtogglex(char *str)
{
    if(str==NULL)
    {
        return;
    }
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            *str=*str-32;//*str-('a'-'A')
        }
        else if ((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;//*str+('a'-'A')
        }
     str++;   
    }
}

int main()
{
char arr[20];

printf("Enter string");
scanf("%[^'\n']s",arr);

strtogglex(arr);

printf("Modified string is %s",arr);

return 0;
}