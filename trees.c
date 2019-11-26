#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* right;
	struct node* left;
}*Node;

Node create(int ele){
	Node p;
	p=(Node)malloc(sizeof(Node));
	p->data=ele;
	p->right=NULL;
	p->left=NULL;
	return p;
}

Node insert(Node root,int ele){
	Node p;
	if(root==NULL)
		return create(ele);
	if(ele<=root->data)
		root->left=insert(root->left,ele);
	else if(ele>root->data)
		root->right=insert(root->right,ele);
	return root;
}

void inorder(Node root){
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

void preorder(Node root){
	if(root==NULL)
		return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(Node root){
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}

void min_ele(Node root){
	Node p;
	p=root;
	while(p->left!=NULL)
		p=p->left;
	printf("%d",p->data);
}

void max_ele(Node root){
	Node p;
	p=root;
	while(p->right!=NULL)
		p=p->right;
	printf("%d",p->data);
}

void search(Node root,int ele){
	if(root==NULL)
		printf("Element not found\n");
	else if(root->data==ele)
		printf("Element found\n");
	else if(root->data>ele)
		return search(root->left,ele);
	else
		return search(root->right,ele);
}

int main(){
	Node root=NULL;
	int ele,ch;
	do{
		printf("\n1)Insert\n2)Inorder Traversal\n3)Preorder Traversal\n4)Postorder Traversal\n5)Minimum element\n6)Maximum element\n7)Search\n8)Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: printf("Enter element: ");
					scanf("%d",&ele);
					root=insert(root,ele);
					break;
			case 2: inorder(root);
					break;
			case 3: preorder(root);
					break;
			case 4: postorder(root);
					break;
			case 5: min_ele(root);
					break;
			case 6: max_ele(root);
					break;
			case 7: printf("Enter element to be searched: ");
					scanf("%d",&ele);
					search(root,ele);
					break;
			case 8: break;
		}
	}while(ch!=8);
	return 0;
}
