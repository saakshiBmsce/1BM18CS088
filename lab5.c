#include<stdio.h>
#define max 3
int isEmpty(int *f,int *r);

int a[max];
void Enqueue(int a[],int *f,int *r)
{	
	int x;
	printf("Enter the number to be Enqueued:\n");
	scanf("%d",&x);
	if(isEmpty(f,r))
	{*r=0;*f=0;}
	else if((*r==max-1&&*f==0)||(*r+1==*f))
	{printf("Queue is Full\n");}
	else
	{
		*r=(*r+1)%max;
		a[*r]=x;
	}
}

void Dequeue(int a[],int *f,int *r)
{
	if(*f==-1)
	{
		printf("the queue is empty!!");
	}
	else
	{
		printf("\n deleted id %d ",a[*f]);
		if(*f==*r){*f=-1;*r=-1;}
		else if(*f==max-1){*f=0;}
		else *f=(*f)+1;
	}
}

int isEmpty(int *f,int *r)
{
	if(*r==-1&&*f==-1)
	return 1;
	else
	return 0;
}



void Display(int a[],int *f,int *r)
{	
	int i,j=0;
	printf("\n Elements in the queue are:\n");
	if(*f==-1&&*r==-1){printf("\n empoty\n");}
	else if(*f>*r)
	{
		for(i=*f;i<max;i++)
		{printf("%d \n",a[i]);
		}
		for(j=0;j<=*r;j++)
		{printf("%d \n",a[i]);
		}
	}
	else
	{for(i=*f;i<=*r;i++)printf("\n %d",a[i]);
	}
	
}

void main()
{
	int f=-1;int r=-1;int ch;
	do
	{
		printf("1. Enqueue \n 2. Dequeue \n 3. Display \n 4. Exit \n");
		printf("Enter your opion:\n");
		
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:Enqueue(a,&f,&r);break;
			case 2:Dequeue(a,&f,&r);break;
			case 3:Display(a,&f,&r);break;
			case 4:printf("program over!!");break;
		}
	}while(ch!=4);
	
}


