#include<iostream>
using namespace std;
void merge(int *a,int *b,int n,int m)
{
	int c[100];
	int i=0,j=0,k=0;
    while(i<m && j<n)
    {
    	if(a[i]<b[j])
    	{
    		c[k++]=a[i++];
    	}
    	else{
    		c[k++]=b[j++];
    	}
}
	for(;i<m;i++)
	{
		c[k++]=a[i];
	}
	for(;j<n;j++)
	{
		c[k++]=b[j];
	}
	//k=n+m;
	for(int k=0;k<m+n;k++)
	{
		cout<<c[k]<<" ";
	}
}
int main()
{
	int c[100];
	int a[50]={1,4,6,8,9,};
	int b[50]={10,11,12,14,16};
	merge(a,b,5,5);
	//print(arr,8);
	return 0;
}