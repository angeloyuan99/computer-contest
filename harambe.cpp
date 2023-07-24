#include<iostream>
using namespace std;
void convertupper(string &str) { 
    int ln = str.length(); 
    for (int i=0; i<ln; i++) {
        if (str[i]>='a' && str[i]<='z') {
            str[i] = str[i] - 32; 
        }
    } 
} 
void convertlower(string &str) { 
    int ln = str.length(); 
    for (int i=0; i<ln; i++) {
        if (str[i]>='A' && str[i]<='Z') {
            str[i] = str[i] + 32; 
        }
    } 
} 
int main(){
    string input;
    getline(cin, input);
    int lowercounter = 0, highercounter = 0;
    for(int i = 0; i < input.length(); i++){
        if(input[i] != ' '){
            if(isupper(input[i])){
                lowercounter++;
            } else{
                highercounter++;
            }
        }
    }
    if(lowercounter == highercounter){
        cout << input << "\n";
    } else if(highercounter > lowercounter){
        convertlower(input);
        cout << input << "\n";
    } else if(lowercounter > highercounter){
        convertupper(input);
        cout << input << "\n";
    }
}