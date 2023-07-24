#include<iostream>
using namespace std;
int main(){
    string input1, input2;
    cin >> input1 >> input2;
    if(input1.length() != input2.length()){
        cout << "No\n";
        return 0;

    }
    for(int i = 0; i < input1.length(); i++){
        char char1 = input1[i], char2 = input2[i];
        if(char1 != char2){
            for(int j = 0; j < input1.length(); j++){
                if(input1[j] == char1){
                    input1[j] = char2;
                } else if(input1[j] == char2){
                    input1[j] = char1;
                }
            }
        }
    }
    if(input1 == input2){
        cout << "Yes\n";
    } else{
        cout << "No\n";
    }
}