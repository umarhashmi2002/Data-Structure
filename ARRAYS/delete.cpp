#include<iostream>
using namespace std;
int main()
{
	int arr[5]={0,1,2,8,6};
	int key;
	cout<<"enter element you want to delete ";
	cin>>key;
	for(int i=0;i<5;i++)
	{
		if(arr[i]==key)
		{
			arr[i]=-1;
		}
	}
	
//	for(int i=0;i<5;i++)
//	{
//		if(arr[i]==2)
//		{
//			arr[i]=-1;
//		}
//	}
	
	for(int j=0;j<5;j++)
	{
		cout<<arr[j]<<" ";
	}
	return 0;
}
