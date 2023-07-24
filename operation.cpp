#include<iostream>
#include<string>
using namespace std;
int main(){
    string a, b;
    char sign;
    cin >> a >> sign >> b;
    string solution = "1";
    if(sign == '+'){
        if(a.length() < b.length()){
            string temp = a;
            a = b;
            b = temp;
        }
        int placement = a.length() - b.length() - 1;
        for(int i = 0; i < placement; i++){
            solution += "0";
        }
        solution += b;
    } else if(sign == '*'){
        int zero = a.length() + b.length() - 2;
        for(int i = 0; i < zero; i++){
            solution += "0";
        }
    }
    cout << solution << "\n";
}