#include<iostream>
using namespace std;

int main(){
	char c;
	
	cin>>c;
	
	
	if(!isalpha(c))  //for numbers or any symbols it returns 0 value  and for lower and upper alphabet it gives some integer value 
		cout<<"not alphabet";
	else if(c=='a' || c=='e'|| c=='i' || c=='o'|| c=='u' || c=='A' || c=='E'|| c=='I' || c=='O'|| c=='U' )
		cout<<"vowel";
	else
		cout<<"consonant";
		
	return 0;
}


