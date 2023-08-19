#include<iostream>
using namespace std;
struct node{
	node* left,*right;
	int data;
	int height;
};
struct node* newnode(struct node* root,int val)
{
	 struct node* newnode=new node;
	 newnode->data=val;
	 newnode->left=newnode->right=nullptr;
	 int height=1;
	 return newnode;
}

int max(int a, int b) {
	return (a > b) ? a : b;
}
int height(struct node *N) {
	if (N == NULL)
		return 0;
	return N->height;
}
int getbalancefactor(struct node *N) {
	if (N == NULL)
		return 0;
		
		
	return height(N->left) -
	       height(N->right);
}

void inorder(struct node* root) {
	if(root==nullptr) {
		return;
	} else
		inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
struct node* rightRotate(struct node* root)
{
	node* y=root->left;
	node* x=y->right;
	y->right=root;
	y->left=x;
	
	root->height= 1 + max(height(root->left), height(root->right));
	y->height=  1 + max(height(y->left), height(y->right));
	return x;
}
struct node* leftRotate(struct node* root)
{
	node* y=root->right;
	node* x=y->left;
	y->left=root;
	y->right=x;
	
	root->height=  1 + max(height(root->left), height(root->right));
	y->height =  1 + max(height(root->left), height(root->right));
	return x;
}
struct node* insert(struct node* root,int val)
{
	if(root==nullptr)
	{
		return newnode(root,val);
	}
	if(val < root->data) {
		root->left=insert(root->left,val);
	} 
	else if(val > root->data) {
		root->right =	insert(root->right,val);
		 }
		 return root;
		 
		 
	root->height = 1 + max(height(root->left), height(root->right));
	
	int balancefactor=getbalancefactor(root);
	if(balancefactor > 1)
	{
		if(val < root->left->data)
		{
			return rightRotate(root);
		}
		else if(val > root->left->data)
		{
			root->left=leftRotate(root->left);
			return rightRotate(root);
		}
	}
	if(balancefactor < -1)
	{
		if(val > root->right->data)
		{
			return leftRotate(root);
		}
		else if(val < root->right->data)
		{
			root->right=rightRotate(root->right);
			return leftRotate(root);
		}
	}
}

int main()
{
	struct node* root=nullptr;
	root=insert(root,17);
	root=insert(root,23);
	root=insert(root,54);
	root=insert(root,19);
	root=insert(root,22);
	root=insert(root,81);
	root=insert(root,3);
	root=insert(root,18);
	inorder(root);
}