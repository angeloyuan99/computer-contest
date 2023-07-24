#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    while(input!="quit!"){
        char c = input[input.length() - 3];
        // cout<<c<<"\n";
        if(input.length() <= 4) {
            cout<<input<<"\n";
            // continue;
        }
        else if(input[input.length() - 1] == 'r' && input[input.length() - 2] == 'o' && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            cout<<input.substr(0, input.length() - 2)<<"our"<<endl;
            // continue;
        }
        else{
            cout<<input<<"\n";
        }
        cin>>input;
    }
    return 0;
}
