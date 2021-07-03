//5.Write a program which accept number from user and return difference between
//summation of even digits and summation of odd digits.
//Input : 2395
//Output : -15 (2 - 17)
//Input : 1018
//Output : 6 (8 - 2)
//Input : 8440
//Output : 16 (16 - 0)
//Input : 5733
//Output : -18 (0 - 18)
#include<stdio.h>
int CountDiff(int iNo)
{
    int iCnt=0;
    int iSum1=0;
    int iSum2=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
  {
      iCnt=iNo%10;
      if ((iCnt%2)==0)
      {
           iSum1=iSum1+iCnt;     
      }
    else
      {
        iSum2=iSum2+iCnt;
      }
      iNo=iNo/10;
  }
  return iSum1-iSum2;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet = CountDiff(iValue);
    printf("%d",iRet);
    return 0;
}