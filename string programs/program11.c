/*
5. Write a program which accept string from user and count number of
white spaces
Input : â€œMarvellouSâ€
Output : 0
Input : â€œMarvellouS Infosystemsâ€
Output : 1
Input : â€œMarvellouS Infosystems by Piyush Manohar Khairnnarâ€
Output : 5
*/
#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt=0;

    if(str==NULL) //Input Filter
    {
        return -1;
    }
    while (*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        str++;
    }
   
    return iCnt;

}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    iRet = CountWhite(arr);
    if(iRet==-1)
    {
        printf("Invalid input ..ByeBye..");
    }
    else
    {
         printf("%d",iRet);
    }  
    return 0;
}
