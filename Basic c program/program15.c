//5. Accept on character from user and check whether that character is vowel
//(a,e,i,o,u) or not.
//Input : E Output : TRUE
//Input : d Output : FALSE
#include<stdio.h>
typedef int _______ ;
# define TRUE _____
# define _________ 0
________ ChkVowel ( char ____)
{
if(____________)
{
_________________
}
else
{
return FALSE;
}
}
int main()
{
char cValue = ‘\0’;
BOOL bRet = FALSE;
printf("Enter character\n");
scanf("%c",&cValue);
bRet = _________ (cValue );
if (bRet == _____)
{
printf(“It is Vowel”);
}
else
{
printf(“It is not Vowel”);
}
return 0;
}