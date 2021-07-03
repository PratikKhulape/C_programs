/*2. Write a recursive program which accept number from user and return
summation of its digits.
Input : 879
Output : 24
Prototype :*/
#include<stdio.h>

/*int Sum(int iNo)
{
    int iDigit=0 ,iSum=0;
    if(iNo<0)
    {iNo=-iNo;}

    while(iNo>0)
    {
        iDigit=iNo%10;
        iSum=+iDigit;
        iNo=iNo/10;
    }
    return iSum;
}*/
int Sum(int iNo)
{

  static  int iDigit=0,iSum=0;
    if(iNo>0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
        Sum(iNo);
    }
return iSum;
}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = Sum(iValue);
printf("%d",iRet);
return 0;
}