#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        string input;
        cin >> input;
        string inputcopy = input;
        for(int j = 0; j < inputcopy.length(); j++){
            int removednum = stoi(input.substr(input.length() - 1, 1));
            int subtractor = stoi(input.substr(input.length() - 3, 2));
            if(to_string(subtractor - removednum).length() == 1){
                input = input.substr(0, input.length() - 3) + "0" + to_string(subtractor - removednum);
            } else if(subtractor < removednum){
                input = input.substr(0, input.length() - 4) + "8" + to_string(100 - removednum);
            } else{
                input = input.substr(0, input.length() - 3) + to_string(subtractor - removednum);
            }
            cout << input << "\n";
        }
    }
}
//12345678901234567900
//1234567890123456790
//123456789012345679
//12345678901234558
//1234567890123447
//123456789012337
//12345678901226
//1234567890116
//123456789005
//12345678895
//12345678995
//1234567884
//123456784
//12345674
//1234563
//123453
//12342
//1232
//121
//11