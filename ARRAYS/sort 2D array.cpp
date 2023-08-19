#include<iostream>
using namespace std;
void sort(int arr[3][3],int n)
{
	int t1,t2,t3;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i][0]<arr[j][0])
			{
				t1=arr[i][0];
				t2=arr[i][1];
				t3=arr[i][2];	
				
				arr[i][0]=arr[j][0];
				arr[i][1]=arr[j][1];
				arr[i][2]=arr[j][2];
				
				arr[j][0]=t1;
				arr[j][1]=t2;
				arr[j][2]=t3;
			}
		}
	}
}
int main()
{
	int arr[3][3],n=3;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	sort(arr,3);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<*(arr[i]+j)<<" ";
		}
		cout<<endl;
	}
}