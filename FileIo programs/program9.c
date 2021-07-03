/*4. Write application which accept file name and one word from user. Count the
frequency of that word in file.
Input : Marvellous.txt
Hello
Output : Count the frequency if Hello in Marvellous.txt file.*/
#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>



int FrequencyWord(char FileName1[],char ch[])
{
  char Arr1[20]={'\0'};
 // char str[20]={'\0'};
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
      char*ptr=Arr1;
        //pratyek array la compare karuya
        // i=0;
       while  (*ptr!='\0')
       {
           if(*ptr==' ')
           {
               while((*ptr==' ')&&(*ptr!= '\0'))
               {
                   ptr++;
               }

           }
           else
           {
               iCnt++;
               while((*ptr!=' ')&&(*ptr!='\0'))
               {
                   ptr++;
               }
           }
       }
       
    }

    return iCnt;
    
  }

int main()
{
    char FileName1[20]={'\0'};
   
     int iRet=0;
     char ch='\0';

    printf("Enter File Name 1 : \n");
    scanf("%[^'\n']s",FileName1);

    iRet=FrequencyWord(FileName1,"world");

   printf("Frequency is:%d\n",iRet);

    return 0;
    



}