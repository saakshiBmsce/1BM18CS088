#include <stdio.h>
#include <conio.h>
#define MAX_ITEM 2
void push(int);
int pop();
void Print();
int item[MAX_ITEM];
int top=-1;
int main()
{

	int ch;
	int p;
	do
	{clrscr();
	 printf("1.push \n");
	 printf("2.pop \n");
	 printf("3.Print \n");
	 printf("4.exit \n");
	 printf("Enter your option \n");
	 scanf("%d",&ch);

	 switch(ch)
	 {
	 case 1:printf("Enter no to be pushed:");

		scanf("%d",&p);
		push(p);
		break;
	 case 2:pop();
		break;
	 case 3:Print();
		break;
	 case 4:exit(1);
		break;
	 default:printf("Wrong option!!");

	  }

	}while(ch!=4);

return 0;
}

void push(int i)
{
	if(isFull())
	printf("Error: stack is full");
	else
	{top=top+1;
	item[top]=i;
	}

	getch();
}

int pop()
{
	if(isEmpty())
	{printf("Error: the stack is empty");
	}
	else
	{top=top-1;
	}
	getch();
	printf("popped element is %d",item[top+1]);
	getch();
	return item[top+1];
}
void Print()
{       int i;
	for(i=top;i>=0;i--)
	{printf("%d ,",item[i]);
	}getch();
}
int isEmpty()
{if(top==-1)return 1;
else return 0;
}
int isFull()
{if(top==MAX_ITEM-1)return 1;
else return 0;
}

