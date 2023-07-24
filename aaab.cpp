#include<iostream>
using namespace std;
int main(){
    string string;
    getline(cin, string);
    char input[string.length()];
    for(int i = 0; i < string.length(); i++){
        input[i] = string[i];
    }
}