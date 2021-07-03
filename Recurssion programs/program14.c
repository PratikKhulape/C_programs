/*4. Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120
Prototype :*/
#include<stdio.h>

/*int Fact(int iNo)
{
    int iCnt=0,iMult=1;
    if(iNo<0)
    {iNo=-iNo;}

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iMult=iMult*iCnt;
    }
    return iMult;
}*/
int Fact(int iNo)
{
     static int iCnt=1;
    static int iMult=1;
    
    if(iCnt<=iNo)
    {
        iMult=iMult*iCnt;
        iCnt++;
        Fact(iNo);
    }
    return iMult;

}

int main()
{
int iValue = 0, iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = Fact(iValue);
printf("%d",iRet);
return 0;
}