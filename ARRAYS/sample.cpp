#include<iostream>
using namespace std;
void merge(int *a,int *b,int *c,int n,int m,int k)
{
	for(int i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(int j=0;j<m;j++)
	{
		c[j]=b[j];
	}
	for(int r=0;r<k;r++)
	{
		//c[r]=a[r]+b[r];
		cout<<c[r]<<" ";
	}
}
int main()
{
	int c[100];
	int a[50]={1,4,6,8,9,};
	int b[50]={10,11,12,14,16};
	merge(a,b,c,5,5,10);
	//print(arr,8);
	return 0;
}