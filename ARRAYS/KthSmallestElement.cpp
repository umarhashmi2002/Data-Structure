#include<iostream>
using namespace std;
int main() {
	int arr[5]= {2,6,9,1,10};
	int k=3;
	for(int i=0; i<4; i++) {
		for(int j=0; j<4-i; j++) {
			if(arr[i]>arr[j]) {
				int t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}

	}
	cout<<arr[k]<<" ";
}
