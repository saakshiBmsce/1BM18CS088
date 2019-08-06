#include<stdio.h>
#include<conio.h>
struct Student
{char name[30];
char USN[11];
struct marks
{int m1;
int m2;
int m3;

}m;
}s1;


void main()
{printf("Enter your name:  ");
scanf("%s",s1.name);
printf("Enter your Usn:  ");
scanf("%s",s1.USN);
printf("Enter your m1,m2,m3:  ");
scanf("%d,%d,%d",&s1.m.m1,&s1.m.m2,&s1.m.m3);
printf("Student info:\n");
printf("Name:%s \n",s1.name);
printf("USN: %s \n",s1.USN);
printf("Marks: m1=%d\nm2=%d\nm3=%d",s1.m.m1,s1.m.m2,s1.m.m3);
printf("Total marks=%d",(s1.m.m1+s1.m.m2+s1.m.m3));
getch();
clrscr();
}
