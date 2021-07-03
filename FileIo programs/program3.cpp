/*3. Write application which accept file name from user and read all data from that file
and display contents on screen.
Input : Demo.txt
Output : Display all data of file.*/
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
    void ReadData()
        {
            char Arr[20]={'\0'};
            read(fd,Arr,20);//Data red :-kuthun read-fd   ,kashyat read-Arr    ,kiti  read -10  ..
            printf("%s",Arr);
        }
    
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    obj.ReadData();
    return 0;
}
