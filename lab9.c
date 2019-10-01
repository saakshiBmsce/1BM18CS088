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

Node deleteAtFront(Node head)
{	
	if(head==NULL)
	{
		printf("The list is empty\n");return;
	}
	Node p=head;
	head=head->next;
	free(p);
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

Node deleteAtEnd(Node head)
{	
	if(head==NULL)
	{
		printf("List is already empty!!\n");return;
	}
	Node temp,p;
	p=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		p=temp;
		temp=temp->next;	
	}
	free(temp);
	p->next=NULL;
	return head;
}

Node deleteAtPos(int pos,Node head)
{	
	Node temp=head;Node tnext;
	int i=1;
	for(i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	tnext=temp->next;
	temp->next=tnext->next;
	free(tnext);
	return head; 
}

int main()
{
	Node head=NULL;
	int num,pos;int ch=0;
	do
	{
		printf("1) Delete at front\n");
		printf("2) Insert from end\n");
		printf("3) Delete from end\n");
		printf("4) Display\n");
		printf("5) Delete at Position \n");
		printf("6) Exit\n");
		printf("Enter an option  ");
		scanf("%d",&ch);
		switch(ch)
		{	
			case 2: printf("Enter the number to be inserted from end");
					scanf("%d",&num);
					head=insertAtEnd(num,head);
					break;
			case 1:head=deleteAtFront(head);
					break;
			case 3:head=deleteAtEnd(head);
					break;
			case 4: display(head);
					break;
			case 6: printf("Done!!");
					break;
			case 5: printf("Enter the pos at ehich it should be deleted:  ");
				scanf("%d",&pos);
				head=deleteAtPos(pos,head);
				break;
			default:printf("Wrong option!!");


		}
	}while(ch!=6);
		
	
}

