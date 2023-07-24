#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cin >> input;
    int num = 0;
    while(input.find("bull", num) != string::npos){
        num = input.find("bull", num + 1);
        input = input.substr(0, num) + "bul" + input.substr(num + 4, input.length() - (num + 4));
    }
    cout << input << "\n";
}