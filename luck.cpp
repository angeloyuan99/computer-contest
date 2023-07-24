#include<iostream>
#include<string>
using namespace std;
string manipulation(string input){
    string newstring;
    int total = 0;
    for(int i = 0; i < input.length(); i++){
        total += input[i] - '0';
    }
    newstring = to_string(total);
    return newstring;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        int total = 0;
        while(input.length() != 1){
            input = manipulation(input);
        }
        cout << input << "\n";
    }
}