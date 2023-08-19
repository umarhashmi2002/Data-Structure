#include<iostream>
using namespace std;
void merge(int *a,int *b,int n,int m)
{
	int c[100];
	int i,j,k;
	i=j=k=0;
	for(i=0;i<n;i++)
	{
		c[k++]=a[i];
	}
	for(j=0;j<m-1;j++)
	{
		for(int g=0;g<m-1-j;g++)
		{
			if(b[g]>b[g+1])
			{
				swap(b[g],b[g+1]);
			}
		}
	}

	for(int j=0;j<m;j++)
	{
		c[k++]=b[j];
	}
	for(k=0;k<m+n-1;k++)
	{
		for(int x=0;x<m+n-1-k;x++)
		{
			if(c[x]>c[x+1])
			{
				swap(c[x],c[x+1]);
			}
		}
	}
	for(int k=0;k<m+n;k++)
	{
		cout<<c[k]<<" ";
	}
}
int main()
{
	int a[5]={1,3,13,2,5};
	int b[3]={6,4,7};
	merge(a,b,5,3);
}