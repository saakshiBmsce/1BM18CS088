#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node *list;

list getNode()
{
    list p;
    p=(list)malloc(sizeof(struct node));
    return p;
}
list insertF(list head,int it)
{
    list p=getNode();
    p->data=it;p->next=NULL;
    if(head==NULL)
    {
        head=p;return head;
    }
    p->next=head;
    head=p;
    return head;
}

list insertE(list head,int it)
{
    list p=getNode();list t=head;
    p->data=it;p->next=NULL;
    if(head==NULL)
    {
        head=p;return head;
    }
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=p;
    return head;
    return head;
}


void display(list head)
{
    list temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

list concat(list h1,list h2)
{
	list h=NULL;
	list t=h1;
	while(t->next!=NULL)t=t->next;
	t->next=h2;
	h=h1;
	return h;
	
}
int main()
{
    int op,x;list h1=NULL;list h2=NULL;list h=NULL;
    h1=insertE(h1,1);h1=insertE(h1,2);h1=insertE(h1,3);h1=insertE(h1,4);h1=insertE(h1,5);
    h2=insertE(h2,1); h2=insertE(h2,2); h2=insertE(h2,3); h2=insertE(h2,4); h2=insertE(h2,5);
    h=concat(h1,h2);
    display(h);
    
   
    
}
