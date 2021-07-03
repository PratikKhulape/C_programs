/*2. Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully.*/


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
#include<io.h>

using namespace std;

class FileX
{
    public:
    int fd;//file discriptor

    FileX(char Name[])//File (char*pointer Name),constructor
    {
        fd=creat(Name,0777);//O_RDONLY,O_WRONLY,O_RDWR,O_CREAT
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
    
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    return 0;
}
