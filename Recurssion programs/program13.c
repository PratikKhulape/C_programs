/*3. Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5

Prototype :*/
#include<stdio.h>

/*int Strlen(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        str++;
        iCnt++;
    }
    return iCnt;
}*/

int Strlen(char *str)
{
    static int iCnt=0;
    if(*str!='\0')
    {
        str++;
        iCnt++;
        Strlen(str);
    }
    return iCnt;
}

int main()
{
int iRet = 0;
char arr[20];
printf("Enter string");
scanf("%s",arr);
iRet = Strlen(arr);
printf("%d",iRet);
return 0;
}