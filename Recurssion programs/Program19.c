/*4. Write a recursive program which accept number from user and return
smallest digit
Input : 87983
Output : 3
Prototype :*/
#include<stdio.h>
//int Min=0;

/*int MinI(int iNo)
{
    int iDigit=0;
    int iMin=9;

    

     while(iNo>0)
     {
         iDigit=iNo%10;
         if(iDigit<iMin)
         {
             iMin=iDigit;
         }
         iNo=iNo/10;
     }
     return iMin;
}*/

int MinR(int iNo)
{
     int iDigit=0;
     static int iMin=9;
    
    if(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit<iMin)
        {   
           iMin=iDigit;
           
        }
        iNo=iNo/10;
        MinR(iNo);

    }
    return iMin;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=MinR(iValue);
    printf("smallest Digit is:%d\n",iRet);

    return 0;
}