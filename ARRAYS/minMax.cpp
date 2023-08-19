#include<iostream>
using namespace std;
int main()
{
	int arr[50],n;
	int min=arr[0];
	int max=arr[0];
	cout<<"enter the element in array ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		if(min>arr[j])
		{
			min=arr[j];
		}
		else if(max<arr[j])
		{
			max=arr[j];
		}
	}
	cout<<"minimum value is "<<min<<" "<<"maximum value is "<<max<<endl;
	return 0;
}