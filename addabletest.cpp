#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool addable(string current, string adder){
    if(current.length() >= adder.length()){
        for(int i = 0; i < adder.length(); i++){
            if((adder[i] - '0') + (current[(current.length() - adder.length()) + i] - '0') >= 10){
                cout << "no sir.\n";
                return false;
            }
        }
    } else{
        for(int i = 0; i < current.length(); i++){
            if((current[i] - '0') + (adder[(adder.length() - current.length()) + i] - '0') >= 10){
                cout << "no sir.\n";
                return false;
            }
        }
    }
    cout << "yes sir.\n";
    return true;
}
int main(){
    for(int i = 0; i < 100; i++){
        string a, b;
        cin >> a >> b;
        addable(a, b);
    }
}
// 5
// 52
// 6
// 84
// 731
// 19