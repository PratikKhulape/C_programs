/*2. Write application which accept file name and one character from user. Count the
frequency of that character in file.
Input : Demo.txt
M
Output : Count occurrence of M in Demo.txt*/

#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>



int Frequency(char FileName1[],char ch)
{
  char Arr1[20]={'\0'};
  
  int fd1=0;
  
  int iRet1=0;
  
  int i=0;
  int iCnt=0;
  //open file for read only
    
  fd1=open(FileName1,O_RDONLY);
  
  
        if(fd1==-1)
        {
        printf("Unable to open %s File\n",FileName1);
        return -1;
        }
        else
        {
            printf("%s File is opened succefully\n",FileName1);
        }
   
  
    while((iRet1=read(fd1,Arr1,20))!=0) 
    { 
        //pratyek array la compare karuya
         i=0;
         
        while(Arr1[i]!='\0')
        {
            if(Arr1[i]==ch)
            {
                printf("%c \n",Arr1[i]);
                iCnt++;

            }
            //printf(" %c \t",Arr1[i]);
            i++;
        }
   
    }

    return iCnt;
    
  }

int main()
{
    char FileName1[20]={'\0'};
   
  int iRet=0;

    printf("Enter File Name 1 : \n");
    scanf("%[^'\n']s",FileName1);

    iRet=Frequency(FileName1,'p');

   printf("Frequency is:%d\n",iRet);

    return 0;
    



}