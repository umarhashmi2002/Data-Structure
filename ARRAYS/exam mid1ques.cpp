#include<iostream>
using namespace std;
void sort(int arr[3][3],int n,int m)
{
	int t1,t2,t3;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			for(int k=0;k<m-j-1;k++)
			{
				if(arr[i][k]>arr[i][k+1])
				{
					swap(arr[k][i],arr[k+1][i]);
				}
			}
		}
	}
}
int main()
{
	int r=3,c=3;;
	int arr[3][3]={{10,3,4},{2,7,9},{12,17,14}};
	sort(arr,r,c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<*(arr[j]+i)<<" ";
		}
		cout<<endl;
	}
}