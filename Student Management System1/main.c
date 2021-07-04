#include"myHeader.h"//becuse this header file is in cureent folder that is why we use double coat.

int main()
{
    {
    PSTUDENT First = NULL;
    int iRet = 0, iOption = 1, iTotalmark = 0,iRollno=0;
    char studentname[30],city[30],iPhno[11];

    
    while(iOption != 0)
    {
        printf("\n____________________________________\n");
        printf("Enter your action on Linked list : \n");
        printf("1 : Add  New student \n");
        printf("2 : Remove  student  \n");
        printf("3 : Update  student  \n");
        printf("4 : Display the student info linked list\n");
        printf("5 : Count  total student\n");
        printf("0 : Exit the application\n");
        scanf("%d",&iOption);
        printf("\n____________________________________\n");
        
        switch(iOption)
        {
            case 1 :
               printf("Enter new student roll no\n");
               scanf(" %d",&iRollno);
               printf("Enter new student name\n");
               scanf(" %[^'\n']s",studentname);
               printf("Enter  new student marks\n");
               scanf(" %d",&iTotalmark);
               printf("Enter  new student city\n");
               scanf(" %[^'\n']s",city);
               printf("Enter new student phone number\n");
               scanf(" %[^'\n']s",iPhno);
               AddStudent(&First,iRollno,studentname,iTotalmark,city,iPhno);
                break;
                
            case 2 :
                if(First==NULL)
             {
                 printf("There is nothing to Delete linkedlist because linkedlist is empty\n");
             }
            else
            {
               printf("Enter  student roll no\n");
               scanf(" %d",&iRollno);
               DeleteStuLast(&First,iRollno);
            }
            
               break;
            	
			 case 3 :
             if(First==NULL)
             {
                 printf("There is nothing to update linkedlist because linkedlist is empty\n");
             }
             else
             {
               printf("Enter  student roll no\n");
               scanf(" %d",&iRollno);
               UpdateStudent(&First,iRollno);
             }
               

                break;
			
				
            case 4:
                printf("student of linked list are : \n");
               DisplayStudentList(First);
                 break;
				
			case 5 :
                iRet = Count(First);
                printf("Number of nodes are : %d\n",iRet);
                break;
                
            case 0:
                printf("Thank you for using our  Linked list application \n");
                break;
                
            default:
                printf("Please enter valid option \n");
                break;
        } // End of switch
    } // End of while
    return 0;
} // End of main

}