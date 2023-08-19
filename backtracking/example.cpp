#include<iostream>
using namespace std;
int count(int grid[4][4],int r,int c,int n)
{
	int count1;
	if(r==n-1 && c==n-1)
	{
		return count1;
	}
	for(int i=0;i<c;i++)
	{
		if(grid[r][c]==1)
		{
			count(grid,r,c+1,n);
			count(grid,r+1,c,n);
			count1++;
		}
		grid[r][c]=0;
	}
	return count1;
}
int main()
{
	int arr[4][4]={{1,0,0,0},{0,1,1,1},{0,1,1,0},{1,0,0,1}};
	cout<<count(arr,0,0,4);
}