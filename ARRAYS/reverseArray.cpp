#include<iostream>
using namespace std;
void reverse(int *arr,int start,int n)
{
	while(start<n)
	{
		int temp=arr[start];
		arr[start]=arr[n];
		arr[n]=temp;
		start++;
		n--;
	}
}
void print(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[]={1,23,4,5,6,7};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"original array "<<endl;
	print(arr,size);
	reverse(arr,0,size-1);
	cout<<endl;
	cout<<"reversed array "<<endl;
	print(arr,size);
	return 0;
}