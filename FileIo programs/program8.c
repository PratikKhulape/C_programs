/*3. Write application which accept two file names from user. Append the contents of
first file at the end of second file.
Input : Demo.txt Hello.txt
Output : Concat contents of Demo.txt at the end of Hello.txt
*/
#include<stdio.h>
#include<io.h>
#include<stdlib.h>
#include<fcntl.h>



int ConcatenateTwoFiles(char FileName1[],char FileName2[])
{
  char Arr1[20]={'\0'};

  
  int fd1=0;
  int fd2=0;
  int iRet1=0;
  
  int i=0;
  
  //open file for read only
    
  fd1=open(FileName1,O_RDONLY);
  fd2=open(FileName2,O_WRONLY | O_APPEND);

  //lseek(fd2,0,SEEK_END);
  
        if(fd1==-1 || fd2==-1)
    {
        if(fd1==-1)
        {
        printf("Enable to Open %s File",FileName1);
        }
        else
        {
            printf("Enable to Open %s File",FileName2);
        }
        exit(1);
    }    
    
    write(fd2," ",1);

    while((iRet1=read(fd1,Arr1,20))!=0)
    { 
        
         write(fd2,Arr1,iRet1);

   
    }

   
    
  }

int main()
{
    char FileName1[20]={'\0'};
    char FileName2[20]={'\0'};
    
    printf("Enter File Name 1 : \n");
    scanf("%[^'\n']s",FileName1);
     printf("Enter File Name 2 : \n");
    scanf(" %[^'\n']s",FileName2);
    
    ConcatenateTwoFiles(FileName1,FileName2);

   

    return 0;
    



}