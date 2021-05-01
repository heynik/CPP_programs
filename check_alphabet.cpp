#include<iostream>
using namespace std;
int main()
{
    char c;

    cout<<"enter character";
    cin>>c;
    

    if (isalpha(c) == 0)
         cout<<" not an alphabet.";
    else
         cout<<" an alphabet.";

    return 0;
}
