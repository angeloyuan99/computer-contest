#include<iostream>
#include<string>
using namespace std;
int main(){
    string input, pastinstruction;
    cin >> input;
    while(input != "99999"){
        if(((input[0] - '0') + (input[1] - '0')) % 2 == 0 && ((input[0] - '0') + (input[1] - '0')) != 0){
            cout << "right " << input.substr(2) << "\n";
            pastinstruction = "right";
        } else if(((input[0] - '0') + (input[1] - '0')) == 0){
            cout << pastinstruction << " " << input.substr(2) << "\n";
        } else{
            cout << "left " << input.substr(2) << "\n";
            pastinstruction = "left";
        }

        cin >> input;
    }
}