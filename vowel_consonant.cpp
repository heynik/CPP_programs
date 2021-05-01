#include<iostream>
using namespace std;

int main(){
	char c;
	int upper, lower;
	cin>>c;
	
	lower = (c=='a' || c=='e'|| c=='i' || c=='o'|| c=='u');
	upper = (c=='A' || c=='E'|| c=='I' || c=='O'|| c=='U');
	
	if(!isalpha(c))    //for numbers or any symbols it returns 0 value  and for lower and upper alphabet it gives some integer value 
						//and here ! use for change false in true so condition is will true for non alphabetic number		
		cout<<"error";
	else if(lower || upper )
		cout<<c<<"vowel";
	else
		cout<<c<<"consonant";
	return 0;
}
