/*5. Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21
Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
void DigitsSum(int Arr[], int iLength)
{
    int i=0,iSum=0,temp=0,iDigit=0;
    for(i=0;i<iLength;i++)
    {
        
        temp=Arr[i];
        iSum=0;
        while(temp>0)
        {
            iDigit=temp%10;
            iSum=iSum+iDigit;
            temp=temp/10;
        }
        printf("%d \t",iSum);
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
    printf("Enter %d elements",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
    printf("Enter element number %d:",iCnt+1);
    scanf("%d",&p[iCnt]);
    }
    DigitsSum(p, iSize);
    free(p);
    return 0;
}