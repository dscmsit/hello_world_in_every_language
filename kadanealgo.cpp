#include<iostream>
using namespace std;

//Kadane's Algorithm
int maximum_sum(int a[],int n){

	//maximum sum
	int cs = 0;
	int ms  = 0;
	for(int i=0;i<n;i++){
		cs = cs + a[i];
		if(cs<0){
			cs = 0;
		}
		if(cs>ms){
			ms = cs;
		}
	}
	return ms;
}

int main(){


	int a[] = {-1,2,-4,6,3,-2,-1,6,-1};
	int n = sizeof(a)/sizeof(int);

	cout<<maximum_sum(a,n)<<endl;


	return 0;
}