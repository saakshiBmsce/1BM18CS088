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

list swap(list head,list pj,list tj)
{   
    list tjn;
    tjn=tj->next;
    if(pj==NULL)
    {
        tj->next=tjn->next;
        tjn->next=tj;
        head=tjn;return head;
    }
    
    pj->next=tjn;
    tj->next=tjn->next;
    tjn->next=tj;
    return head;
    
}

list sort(list head)
{
    list pi,pj,tj,t=head;int i,j,l=0;
    while(t!=NULL)
    {
        l++;t=t->next;
        
    }
    
    t=head;
    for(i=0;i<l-1;i++)
    {
        pj=NULL;
        tj=head;
        for(j=0;j<l-i-1;j++)
        {
            if((tj->data)>(tj->next->data))
            {
               head= swap(head,pj,tj);
            }
            pj=tj;
            tj=tj->next;
        }
        t=t->next;
    }
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
int main()
{
    int op,x;list h1=NULL;list h2=NULL;
    h1=insertE(h1,1);h1=insertE(h1,2);h1=insertE(h1,3);h1=insertE(h1,4);h1=insertE(h1,5);
    h1=reverse(h1);
    display(h1);
    
   
    
}
