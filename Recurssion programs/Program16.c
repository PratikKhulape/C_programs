/*1. Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3
Prototype :*/
#include<stdio.h>

/*int WhiteSpaceI(char *str)
{
    int iCnt=0;
    if(str==NULL)
    {return 0;}

    while(*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;

}*/
int WhiteSpaceR(char *str)
{
  static int iCnt=1;
   if(*str!='\0')
   {
       if(*str==' ')
       {
           iCnt++;
             
       }
        str++;
       WhiteSpaceR(str);
   }
   return iCnt;


}

int main()
{
    char Arr[10];
    int iRet=0;
    printf("Enter string \n");
    scanf("%[^'\n']s",Arr);

    iRet=WhiteSpaceR(Arr);
    printf("Freuency of whitespace is:%d\n",iRet);

    return 0;
}