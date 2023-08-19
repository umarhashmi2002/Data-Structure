#include<iostream>
using namespace std;
void aarray(int *arr,int n,int x)
{
	int i=n-1;
	while(arr[i]>x)
	{
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=x;
}
void print(int *arr,int n)
{
	for(int i=0;i<n+1;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[50]={1,4,6,8,9,13,14,25};
	aarray(arr,8,15);
	print(arr,8);
	return 0;
}