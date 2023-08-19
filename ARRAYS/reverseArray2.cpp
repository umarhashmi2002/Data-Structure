#include<iostream>
using namespace std;
int reverseArray(int *arr,int n){
	int temp=1;
	for(int i=0;i<=n;i++,n--)
	{
		temp=arr[i];
		arr[i]=arr[n];
		arr[n]=temp;
	}
	return temp;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	reverseArray(arr,n);
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}