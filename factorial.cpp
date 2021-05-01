#include <iostream>
using namespace std;

int main()
{
    int n,sum=1;
    cout<<"enter number";
    cin>>n;
    
	if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
		for( int i=n; i>=1; i--){
    		cout<<i<<"!";
    		sum = sum * i;
    	
	}
	cout<<endl<<sum;
	return 0;
}
}
