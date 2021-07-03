/*5. Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325
Prototype :*/
#include<stdio.h>

/*int ReverseI(int iNo)
{
    int iDigit=0;
    int iRev=0;
    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
    return iRev;

}*/

int ReverseR(int iNo)
{
         int iDigit=0;
   static int  iRev=0;

    if(iNo>0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
        ReverseR(iNo);
    }
    return iRev;
}

int main()
{
    int iValue =0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=ReverseR(iValue);

    printf("Reverse number is:%d\n",iRet);
    return 0;

}