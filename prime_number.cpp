#include<iostream>
using namespace std;

int main(){
	int n,i,a=0;
	cin>>n;
	for(i=2;i<n;i++){
		if( n%i==0){
			cout<<"not prime number"<<endl;
			a=1;
			break;
		}}
	
	if(n==0 || n==1){
		cout<<"not prime number";
		a=1;
	}

	if(a==0){
		cout<<"prime number";
	}
			
	return 0;
}
