#include<iostream>
using namespace std;
void insert_at_given_position(int *arr,int index,int key,int position)
{
	for(int i=index-1;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[position-1]=key;
	index++;
}
int main()
{
	int a[50],key,pos,size;
	cout<<"enter the number of element in array ";
	cin>>size;
	cout<<"enter the position ";
	cin>>pos;
	cout<<"enter the key you want to insert ";
	cin>>key;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<size;j++)
	{
		cout<<a[j]<<" ";
	}
	insert_at_given_position(a,size,key,pos);
	cout<<"\n";
	for(int k=0;k<size+1;k++)
	{
		cout<<a[k]<<" ";
	}
	return 0;
}