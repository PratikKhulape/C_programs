//Create separate visual Studio project for each problem statement separately.
//Calculate Time Complexity of each program.
//1.Write a program which accept number from user and display its multiplication of
//factors.
//Input : 12
//Output : 144 (1 * 2 * 3 * 4 * 6)
//Input : 13
//Output : 1 (1)
//Input : 10
//Output : 10 (1 * 2 * 5)

#include<stdio.h>
int MultFact(int iNo)
{
    int i=0, iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    } 

    for(i=1;i<=iNo/2;i++)
    {
     if(iNo% i==0)
        {
        iMult=iMult*i;
        }
    }
    return iMult;
    

}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = MultFact(iValue);
printf("%d",iRet);
return 0;
}