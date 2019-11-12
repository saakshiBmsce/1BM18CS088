#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
typedef struct node *list;
list insertE(list h,int data)
{
	list p=(list)malloc(sizeof(struct node));
	p->data=data;
	p->next=NULL;
	p->prev=NULL;
	list t=h;
	if(h==NULL)
	{h=p;}
	
	else
	{
	 while(t->next!=NULL)
	{t=t->next;
	}
	t->next=p;
	 p->prev=t;
	}return h;
}

void display(list h)
{
	list t=h;
	while(t!=NULL)
	{printf("%d\n",t->data);t=t->next;
	}
}


list deleteF(list h)
{
	list t=h;
	list d;
	while(t->next->next!=NULL)t=t->next;
	
	free(t->next);t->next=NULL;
	return h;
}

int main()
{
int op=0;int x;
list h=NULL;
	do
	{
	printf("1.enque\n");
	printf("2.deque\n");
	printf("3.display\n");
	printf("4.exit\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:printf("Enter ");scanf("%d",&x);h=insertE(h,x);break;
		case 2:h=deleteF(h);break;
		case 3:display(h);break;
		case 4:printf("End");
	}
	}while(op!=4);

}



