#include<iostream>
using namespace std;
int main(){
    string input;
    cin >> input;
    int n = input.length();
    if(input[0] == '-'){
        n--;
    }
    if(n == 1 || n == 2 || n == 3 || n == 5){
        cout << "true\n";
        return 0;
    }
    cout << "false\n";
    return 0;
}