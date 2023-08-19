#include<iostream>
using namespace std;

bool containDistinct(int *arr,int n){
	int b[50];
	for(int i=1,j=n;i<=n,j>=0;i++,j--)
	{
		b[50]=arr[n];
		if(arr[i]==b[j])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int arr[6]={1,2,3,4,5,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<containDistinct(arr,n);
//	for(int i=1;i<=n;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
	return 0;
}