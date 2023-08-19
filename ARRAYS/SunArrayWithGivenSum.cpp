#include<iostream>
using namespace std;
int main()
{
	int arr[50]={1,5,3,7,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=10;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int sum=arr[i]+arr[j];
			if(sum==k)
			{
				cout<<"  i  ="<<i<<" j ="<<j<<endl;
				break;
			}
		}
	}
	return 0;
}