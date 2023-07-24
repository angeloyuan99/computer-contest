#include<iostream>
#include<string>
using namespace std;
int main(){
    string input, underscores = "";
    cin >> input;
    for(int i = 0; i < input.length(); i++){
        input[i] = tolower(input[i]);
    }
    for(int j = 0; j < input.length() - 8; j++){
        underscores += '_';
    }
    if(input == "darcy_liu"){
        cout << "real\n";
    } else if(input.substr(0, 5) == "darcy" && input.substr(input.length() - 3, 3) == "liu" && input.substr(5, input.length() - 8) == underscores){
        cout << "fake\n";
    } else{
        cout << "other user\n";
    }
}