#include<iostream>
using namespace std;
bool check(int grid[4][4],int row,int col)
{
	//check for column
	int i,j;
	for(int i=0;i<col;i++)
	{
		if(grid[row][i])
		{
			return false;
		}
	}
	//check for upper left diagonal
	for(i=row,j=col;i>=0 && j>=0 ; i--,j--)
	{
		if(grid[i][j])
		{
			return false;
		}
	}
	//check for lower diagonal
	for(i=row,j=col;i<4 && j>=0 ; i++,j--)
	{
		if(grid[i][j])
		{
			return false;
		}
	}
	return true;
}
bool Nqueen(int grid[4][4],int col)
{
	if(col>=4)
	{
		return true;
	}
	for(int i=0;i<4;i++)
	{
		if(check(grid,i,col))
		{
			grid[i][col]=1;
			if(Nqueen(grid,col+1))
			     return true;
			     
			grid[i][col]=0;
		}
	}
	return false;
}
int main()
{
	int grid[4][4]={{0,0,0,0},
               	   {0,0,0,0},
             	   {0,0,0,0},
				   {0,0,0,0}};
				 
	if(Nqueen(grid,0))
	{
    	for(int i=0;i<4;i++)
    	{
	    	for(int j=0;j<4;j++)
	    	{
	    		cout<<grid[i][j]<<" ";
	    	}
         	cout<<"\n";
    	}
    }
}
