
#include<stdio.h>
#include<stdlib.h>
#include<string.h>                                                     
#pragma pack(1)
struct Student
{
    int iRollNo;
    char Name[30];
    int iMarks;
    char City[30];
    char iPhno[11];
    struct Student* next;
};

typedef struct Student STUDENT;
typedef struct Student* PSTUDENT;
typedef struct Student** PPSTUDENT;

void AddStudent(PPSTUDENT,int ,char [],int ,char [],char[]);
void DisplayStudentList(PSTUDENT);
void  DeleteStuLast(PPSTUDENT,int );
void UpdateStudent(PPSTUDENT,int );

int Count(PSTUDENT Head);