#include<iostream>
using namespace std;
void left_rotate_array(int *arr,int n,int d)
{
	int temp[d];
	for(int i=0;i<d;i++)
	{
		temp[i]=arr[i];
	}
	int x=0;
	for(int j=d;j<n;j++)
	{
		arr[x]=arr[j];
		x++;
	}
	x=0;
	for(int k=n-d;k<n;k++)
	{
		arr[k]=temp[x];
		x++;
	}
}
void print(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void reverse(int *arr,int n)
{
	int b[50];
	for(int i=n-1,j=0;i>=0;i--,j++)
	{
		b[j]=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=b[i];
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	cout<<"enter k ";
	//int k;cin>>k;
	//left_rotate_array(arr,5,k);
	reverse(arr,5);
	print(arr,5);
	return 0;
}