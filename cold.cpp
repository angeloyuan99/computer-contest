#include<iostream>
using namespace std;
int main(){
    string input, specialinput;
    int num, lowest = 200;
    while(input != "Waterloo"){
        cin >> input;
        cin >> num;
        if(num < lowest){
            lowest = num;
            specialinput = input;
        }
    }
    cout << specialinput << "\n";
    return 0;
}