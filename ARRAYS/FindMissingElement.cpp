#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,4,5};
	int count=1;
	for(int i=0;i<4;i++)
	{
		if(arr[i]!=count)
		{
			cout<<count<<endl;
		}
		count++;
	}
	return 0;
}