#include<iostream>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    if(a == "WHITE" && b == "RED"){
        cout << "BLUE";
    } else if(a == "RED" && b == "WHITE"){
        cout << "BLUE";
    } else if(a == "BLUE" && b == "WHITE"){
        cout << "RED";
    } else if(a == "WHITE" && b == "BLUE"){
        cout << "RED";
    } else if(a == "RED" && b == "BLUE"){
        cout << "WHITE";
    } else if(a == "BLUE" && b == "RED"){
        cout << "WHITE";
    }
}