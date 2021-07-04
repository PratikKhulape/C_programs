#include"myHeader.h"

void AddStudent(PPSTUDENT Head,int iRno,char Sname[],int iTmark,char Area[],char iMob[])
{
   

    PSTUDENT newn = NULL;
    PSTUDENT temp=*Head;
    newn = (PSTUDENT)malloc(sizeof(STUDENT));
    newn->iRollNo=iRno;
    strcpy(newn->Name,Sname);
    newn->iMarks=iTmark;
    strcpy(newn->iPhno,iMob);
    strcpy(newn->City,Area);
    newn->next=NULL;
    
    
    if(*Head == NULL)
    {
        *Head = newn;
         printf("data is inserted succesfully\n");
    }
    else
    {
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        printf("data is inserted succesfully\n");
    }

}

void DisplayStudentList(PSTUDENT Head)
{
    printf("Roll no     Name            City       PhoneNumber     Marks\n");
    printf("-------------------------------------------------------------\n");
    while (Head!=NULL)
    {
       // printf("inside while\n");
         printf("%-11d %-15s %-10s %-15s %-3d \n",Head->iRollNo,Head->Name,Head->City,Head->iPhno,Head->iMarks);
         
         Head=Head->next;
    }
}

void  DeleteStuLast(PPSTUDENT Head,int iRno)

	{
        PSTUDENT temp=*Head;
        PSTUDENT Target=NULL;
	
	if(*Head==NULL)
	{
		return;
	}	
	
    else if((*Head)->iRollNo==iRno)
	{
        if((*Head)->next==NULL)
	   {
		free(*Head);
		*Head=NULL;
	   }
       else
       {
		Target=(*Head);
        *Head=(*Head)->next;
		free(Target);
       }
	}	
	else //if linked list contains more than one node
    {

        while (temp->next!=NULL)//ji node delete karayachi aahe tyachya aadhi chya node cha address milwayacha
          {
            if(temp->next->iRollNo==iRno)
            {
                        Target=temp->next;
                        temp->next=temp->next->next;
                        free(Target);
                        printf("Student is deleted succussfully from the list\n");
                        break; 
            }
            temp=temp->next;
          }

         if(temp->next==NULL)
          {
           printf("This student is not in student list\n");
          }
         
    }
	
}

void UpdateStudent(PPSTUDENT Head,int iRno)
{
    
    PSTUDENT temp=*Head;
    int  newiTotalmark = 0,newiRno=0;
    char newstudentname[30],newcity[30],newiPhno[11];
    
    

    int iChoice=1;
    
		while(temp->iRollNo!=iRno) 
		{
			temp=temp->next;
        }    

            while(iChoice!=0)
            {
              printf("\n____________________________________\n");
              printf("1:Update student Roll no\n");
              printf("2:Update student Name\n");
              printf("3:Update student Marks\n ");
              printf("4:Update student Mobile number\n");
              printf("5:Update student city\n");
              printf("0 : Exit the application\n");
              scanf("%d",&iChoice); 
              printf("\n____________________________________\n");

                switch(iChoice)
               { 

                  case 1:
                  printf("Enter new student roll no\n");
                  scanf(" %d",&newiRno);
                  temp->iRollNo=newiRno;
                    break;

                  case 2:
                  printf("Enter new student name\n");
                  scanf(" %[^'\n']s",newstudentname);
                  strcpy(temp->Name,newstudentname);
                  break;

                  case 3:
                  printf("Enter  new student marks\n");
                  scanf(" %d",&newiTotalmark);
                 temp->iMarks=newiTotalmark;
                   break;

                  case 4:
                  printf("Enter new student phone number\n");
                  scanf(" %[^'\n']s",newiPhno);
                  strcpy(temp->iPhno,newiPhno);
                  break;  

                  case 5:
                  printf("Enter  new student city\n");
                  scanf(" %[^'\n']s",newcity);
                  strcpy(temp->City,newcity);
                  break;

                      
                  case 0:
                  printf("Now press 4 and hit enter to display updated list\n");
                  break;
                
                  default:
                  printf("Please enter valid option \n");
                  break;


                }

            }
			
        
		
		
}
int Count(PSTUDENT Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}



/*

 11  22  33   44  55

 int i=0;
 while(i<ilength)
 {
     if(arr[i]==101)
     {
         break;
     }
 }

 if(i==iSize)
 {
     elemenr is nor in the array
 }
 else
 {
     element foud in array
 }




*/