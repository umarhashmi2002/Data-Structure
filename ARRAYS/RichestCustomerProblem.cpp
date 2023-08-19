#include<iostream>
using namespace std;
int main() {
	int n,m,sum[50], total[50];
	int arr[4][2]= {{1,2},{4,5},{5,11},{11,11}};
	for(int i=0; i<4; i++) {
		for(int j=0; j<2; j++) {
			total[i]=arr[i][j]+arr[i][j+1];
			//cout<<total[i] <<endl;
			break;
		}
	}
	for(int i=0; i<4; i++) {
		if(total[i]>total[i+1]||total[i]>total[i+2]||total[i]>total[i+3]) {
			cout<<total[i]<<" ";
		}
	}
	cout<<"\n";
return 0;
}