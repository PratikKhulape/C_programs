/*3. Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Difference(int Arr[], int iLength)
{
    int i=0, iMax=Arr[0],iMin=Arr[0];
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]>iMax)
        {
            iMax=Arr[i];
        }
        else if(Arr[i]<iMin)
        {
            iMin=Arr[i];
        }

    }
    /*trouble shoot
    printf("imax :%d",iMax);
    printf("imin :%d",iMin);
    */
    return iMax-iMin;
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
iRet = Difference(p, iSize);
printf("Difference is %d",iRet);
free(p);
return 0;
}