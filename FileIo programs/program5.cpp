/*5. Write application which accept file name from user and one string from user. Write
that string at the end of file.
Input : Demo.txt
Hello World
Output : Write Hello World at the end of Demo.txt file*/
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
        fd=open(Name,O_WRONLY|O_APPEND);//O_RDONLY,O_WRONLY,O_RDWR,O_CREAT
        if(fd==-1)
        {
            cout<<"Unable to creat file\n";
            exit(0);
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
    void WriteData()
        {
            char str[]=" Hello world";
            write(fd,str,12);
        }
    
};
int main()
{
  
    char str[50];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    
    obj.WriteData();
    return 0;
}
