/*4. Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
#include<io.h>
//Stdin=statndard input device-kyboard-0
//stdout=std output device-monitor-1
//stderr= std error device-monitor-2

using namespace std;

class FileX
{
    public:
    int fd;//file discriptor

    FileX(char Name[])//File (char*pointer Name),constructor
    {
        fd=open(Name,O_RDONLY);//O_RDONLY,O_WRONLY,O_RDWR,O_CREAT
        if(fd==-1)
        {
            cout<<"Unable to creat file\n";
        }
        else
        {
            cout<<"File succesfully created..\n";
        }
    }    
     ~ FileX()//system call
        {
            close(fd); 
        }
    void GetFileSize()
        {
            int ret=0;
            int iSize=0;
            char Arr[10]={'\0'};
            
            while((ret=read(fd,Arr,10))!=0)
            {
                iSize=iSize+ret;

            }//Data red :-kuthun read-fd   ,kashyat read-Arr    ,kiti  read -10  ..
            
            printf("%d",iSize);
            
        }
    
};
int main()
{
    int no=0;
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);

    obj.GetFileSize();
    return 0;
}

