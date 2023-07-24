#include<iostream>
using namespace std;
int main(){
    int length, lines, ocounter = 0;
    cin >> length >> lines;
    for(int i = 0; i < lines; i++){
        string input;
        cin >> ws;
        getline(cin, input);
        for(int i = 0; i < length - input.length(); i++){
            cout << " ";
        }
        while(input.find('o') != string::npos){
            input.replace(input.find('o'), 1 , " ");
            ocounter++;
        }
        while(input.find('*') != string::npos){
            input.replace(input.find('*'), 1 , " ");
        }
        cout << input << "\n";
    }
    for(int i = 0; i < ocounter; i++){
        cout << "o";
    }
    cout << "\n";
}
// 8 4
//   #o##  
//  #*##*# 
// ##o##o##
//  ######