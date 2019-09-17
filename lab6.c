#include <stdio.h>
#include<stdlib.h>
struct node
{
	int item;
	struct node *next;
	
};
 typedef struct node * Node;
Node getNode()
{
	Node p;
	p=(Node)malloc(sizeof(struct node));
	return p;
}

Node insertAtFront(int it,Node head)
{
	Node p;
	p=getNode();
	p->item=it;
	p->next=head;
	head=p;
	return head;
}

void display(Node head)
{	Node p;
	if(head==NULL)
	{
		printf("The list is empty\n");
	}
	else
	{
		p=head;
		while(p!=NULL)
		{
			printf("%d\n",p->item);
			p=p->next;
		}
	}
}

Node insertAtEnd(int it,Node head)
{
	Node p;
	
	Node q=getNode();
	q->item=it;
	q->next=NULL;
	if(head==NULL)return q;
	else
	{	p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=q;
		
	}
	return head;
}

int main()
{
	Node head=NULL;
	int num;int ch=0;
	do
	{
		printf("1) Insert at front\n");
		printf("2) Insert from end\n");
		printf("3) Display\n");
		printf("4) Exit\n");
		printf("Enter an option  ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the number to be inserted at front");
					scanf("%d",&num);
					head=insertAtFront(num,head);
					break;
			case 2: printf("Enter the number to be inserted from end");
					scanf("%d",&num);
					head=insertAtEnd(num,head);
					break;
			case 3: display(head);
					break;
			case 4: printf("Done!!");
					break;
			default:printf("Wrong option!!");


		}
	}while(ch!=4);
		
	
}

