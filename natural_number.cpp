#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
//If user enters negative number, Sum = 0 is displayed and program is terminated.
    cout<<"enter number";
    cin>>n;
    
    for(int i=1; i<=n; i++){
    	sum = sum + i;
	}
	
	cout<<"sum"<<sum;
	return 0;
}
