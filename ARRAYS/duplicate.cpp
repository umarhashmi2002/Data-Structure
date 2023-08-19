#include<iostream>
using namespace std;
void array_duplicate(int* arr,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				int k=j;
				while(k<n)
				{
					arr[k]=arr[k+1];
					k++;
				}
				--n;
			}
			else{
				continue;
			}
		}	
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={1,2,1,3,5,6,2,4,5,2,4,9,10,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	array_duplicate(arr,size);
	//print(arr,size);
	return 0;
}