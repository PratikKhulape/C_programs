/*2. Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9
Prototype :*/
#include<stdio.h>

/*int MaxI(int iNo)
{
    int iDigit=0;
    int iMax=0;
    
    if(iNo<0)
    {iNo=-iNo;}

    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit>iMax)
        {
            iMax=iDigit;
            if(iMax==9)
            {
                break;
            }
            iNo=iNo/10;
        }
    }
    return iMax;
}*/

int MaxR(int iNo)
{
    int iDgit=0;
    static int  iMax=0;

    if(iNo>0)
    {
        iDgit=iNo%10;
        if(iDgit>iMax)
        {
            iMax=iDgit;
           
        }
        iNo=iNo/10;
        MaxR(iNo);
    }
    return iMax;

}

int main()
{
    int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=MaxR(iValue);

    printf("Lagest digit :%d\n",iRet);

    return 0;
}