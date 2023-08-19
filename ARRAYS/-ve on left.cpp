#include<iostream>
using namespace std;
void aarray(int *arr,int n)
{
	int i=0;
	int j=n-1;
	while(i<j){
    	while(arr[i]<0)
    	{
    		i++;
    	}
    	while(arr[j]>=0)
    	{
    		j--;
        }
        if(i<j)
        	swap(arr[i],arr[j]);
    }
}
void print(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[50]={1,-4,6,-8,9,-13,-14,25};
	aarray(arr,8);
	print(arr,8);
	return 0;
}