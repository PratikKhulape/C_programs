/*5. Write a recursive program which accept number from user and return its
product of digits.
Input : 523
Output : 30
Prototype :*/
#include<stdio.h>

/*int Mult(int iNo)
{
    int iDigit=0,iMult=1;
    if(iNo<0)
    {iNo=-iNo;}

    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit!=0)
        {
            iMult=iMult*iDigit;
        }
        iNo=iNo/10;
    }
    return iMult;

}*/
int Mult(int iNo)
{
    static int iDigit=0;
   static int iMult=1;

    if(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit!=0)
        {
            iMult=iMult*iDigit;
        }
        iNo=iNo/10;
        Mult(iNo);

    }
    return iMult;
}

int main()
{
int iValue = 0, iRet = 0;
printf("Enter number\n");
scanf("%d",&iValue);
iRet = Mult(iValue);
printf("%d",iRet);
return 0;
}