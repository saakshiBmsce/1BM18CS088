#include<stdio.h>
#include<conio.h>
#include<string.h>
int max=50;
void AddStudentEntered();
void LateStudentsDetail();
void displayStudentDetails();
void RemoveStudentLeft();
int isempty();
int isfull();
struct student
{
 char usn[10];
 char name[25];
 char mail[30];
};
struct student s1[50];
int top=-1;
int main()
{
 int choice;
 clrscr();
 do
 {
  printf("\n ****STACK MENU****");
  printf("\n 1.AddStudentEntered\n2.RemoveStudentLeft\n3.LateStudentsDetail\n4.displayStudentDetails\n5.exit");
  printf("\n Enter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:AddStudentEntered();
	  break;
   case 2:RemoveStudentLeft();
	  break;
   case 3:LateStudentsDetail();
	  break;
   case 4:displayStudentDetails();
	  break;
   case 5:exit(0);
	  break;
   default:exit(0);
  }
 }while(choice>-1);
 getch();
 return 0;
}
void AddStudentEntered()
{
 if(isfull())
  printf("\n STACK OVERFLOW");
 else
 {
  top=top+1;
  printf("\n enter usn:");
  scanf("%s",&s1[top].usn);
  printf("\n enter name:");
  scanf("%s",&s1[top].name);
  printf("\n enter email:");
  scanf("%s",&s1[top].mail);
 }
}
void RemoveStudentLeft()
{
 int x;
 if(isempty())
  printf("\n STACK UNDERFLOW");
 else
 {
  x=top;
  printf("\n RemoveStudentLeftped student ");
  printf("\n usn=%s",s1[x].usn);
  printf("\n name=%s",s1[x].name);
  printf("\n mail=%s",s1[x].mail);
  top=top-1;
 }
}
void displayStudentDetails()
{
 int i;
 if(isempty())
  printf("\n STACK UNDERFLOW");
 else
 {
  printf("\n STUDENT DETAILS");
  for(i=top;i>=0;i--)
  {
   printf("\n usn=%s",s1[i].usn);
   printf("\n name=%s",s1[i].name);
   printf("\n mail=%s\n",s1[i].mail);
  }
 }
}
void LateStudentsDetail()
{
 if(isempty())
  printf("\n STACK UNDERFLOW");
 else
  printf("\n usn=%s",s1[top].usn);
  printf("\n name=%s",s1[top].name);
  printf("\n mail=%s",s1[top].mail);
}
int isempty()
{
 if(top==-1)
  return 1;
 else
  return 0;
}
int isfull()
{
 if(top==max-1)
  return 1;
 else
  return 0;
}