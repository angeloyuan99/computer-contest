#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        string input;
        cin >> input;
        int max = 0;
        for(int j = 0; j < input.length(); j++){
            if((input[j] - '0') > max){
                max = input[j] - '0';
            }
        }
        cout << max << "\n";
    }
}
// 1
// 10
// 102
// 1025
// 9999