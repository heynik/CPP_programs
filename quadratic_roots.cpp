#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a,b,c,dis,root1,root2,realPart,imaginaryPart;
	cout<<"enter a,b,c";
	cin>>a>>b>>c;
	dis = b*b - 4*a*c;
	
	if(dis>0){
		cout<<"roots are real and differnt";
		root1= (-b+ sqrt(dis))/(2*a);
		
		root2=(-b -sqrt(dis))/(2*a);
		cout<<"root1 "<<root1<<"root2"<<root2;
	}
	
	else if(dis ==0){
		cout<<"roots are real and equal";
		root1= -b / (2*a);
		cout<<"root1 = root2 ="<<root1;
	}
	
	else{
		cout<<"roots are complex and differnt";
		realPart = -b/(2*a);
        imaginaryPart =sqrt(-dis)/(2*a); 
        cout << "root1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "root2 = " << realPart << "-" << imaginaryPart << "i" << endl;
	}
	
	return 0;
}
