#include<iostream>
#include<string>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        string input;
        cin >> input;
        cout << input;
        char firstletter = input[0];    
        input = input.substr(1, input.length() - 1);
        int happy;
        while(happy != string::npos){
            happy = input.find(firstletter, happy + 1);
            if(input.substr(input.find(firstletter, happy - 1), input.length() - input.find(firstletter, happy - 1)) == input.substr(0, input.find(firstletter, happy - 1))){
                cout << (input.substr(input.length() - input.find(firstletter, happy - 1)), (input.length() - input.length() - input.find(firstletter, happy - 1)));
                break;
            }
        }
    }
}