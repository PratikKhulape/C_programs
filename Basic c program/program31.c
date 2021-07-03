//1.Write a program which accept number from user and return the count of even
//digits.
//Input : 2395
//Output : 1
//Input : 1018
//Output : 2
//Input : -1018
//Output : 2
//Input : 8462
//Output : 4
#include<stdio.h>
int CountEven(int iNo)
{
 int iCount=0,iCnt=0;
if(iNo<0)
  {
      (iNo=(-iNo));
  }
  //if(iNo==0)
 // {return 1;}
  while(iNo>0)
  {
      iCount=iNo%10;
      if((iCount%2)==0)
      {
          iCnt++;
      }
      iNo=iNo/10;

  }
  return iCnt;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = CountEven(iValue);
printf("%d",iRet);
return 0;
}