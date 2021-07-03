/*4. Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i=0,temp=0,iCnt=0;
    for(i=0;i<iLength;i++) 
    {
        iCnt=0;
       temp=Arr[i];
       while (temp>0)
       {
           iCnt++;
           temp=temp/10;
       }
       if(iCnt==3)
       {
           printf("%d \t",Arr[i]);
       }
  }
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0;
int *p = NULL;
printf("Enter number of elements");
scanf("%d",&iSize);
p = (int *)malloc(iSize * sizeof(int));
if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}
printf("Enter %d elements ",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter element number %d:",iCnt+1);
scanf("%d",&p[iCnt]);
}
Digits(p, iSize);
free(p);
return 0;
}