#include<iostream>
using namespace std;

bool containDistinct(int *arr,int n,int k){
	
	for(int i=0,j=n-1;i<=n,j>=0;i++,j--)
	{
		if(arr[i]==arr[j] && arr[i]==k && arr[j]==k)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int arr[5]={1,2,3,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	cout<<containDistinct(arr,n,k);
//	for(int i=1;i<=n;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
	return 0;
}