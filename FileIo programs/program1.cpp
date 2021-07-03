/*1. Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully.*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>

using namespace std;

class FileX
{
    public:
    int fd;//file discriptor

    FileX(char Name[])//constructor
    {
        fd=open(Name,O_CREAT|O_RDONLY);//O_RDONLY,O_WRONLY,O_RDWR
        if(fd==-1)
        {
            cout<<"Unable to open file\n";
        }
        else
        {
            cout<<"File succesfully opened..\n";
        }
    }    
     ~ FileX()
        {
            close(fd); 
        }
    
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    return 0;
}