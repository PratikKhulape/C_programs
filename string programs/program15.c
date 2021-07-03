/*4.Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.

Input : “Marvellous Multi OS”
M

Output : 11

Input : “Marvellous Multi OS”
W

Output : -1

Input : “Marvellous Multi OS”
e

Output : 4
*/
#include<stdio.h>
int LastChar(char *str, char ch)
{
int i=0;    
    if(str==NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        
        str++;
        i++;
    }
    str--;
    i--;
    while(i>=0)
    {
        if(*str==ch)
        {
            break;
        }
        str--;
        i--;
    }
        if(*str=='\0')
        {
            return -2;
        }
        else
        {
            return i;
        }
        
}

int main()
{
char arr[20];
char cValue;
int iRet = 0;

printf("Enter string\n");
scanf("%[^'\n']s",arr);

printf("Enter the character\n");
scanf(" %c",&cValue);

iRet = LastChar(arr, cValue);
    if(iRet==-1)
    {
        printf("wrong input ..bye \n");
    }
    else if(iRet==-2)
    {
        printf("Character is not found  \n");
    }
    else
    {
        printf("Character location is %d",iRet);
    }

    

    return 0;
}