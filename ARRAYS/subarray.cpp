#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5},n=5;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<arr[k]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}