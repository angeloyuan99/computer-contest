#include<iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    for(int i = 0; i < n.length(); i++){
        if(n[i] == '0'){
            cout << " * * *\n*      *\n*      *\n*      *\n\n*      *\n*      *\n*      *\n * * *\n\n";
        } else if(n[i] == '1'){
            cout << "*\n*\n*\n\n*\n*\n*\n\n";
        } else if(n[i] == '2'){
            cout << " * * *\n       *\n       *\n       *\n * * *\n*\n*\n*\n * * *\n\n";
        } else if(n[i] == '3'){
            cout << " * * *\n       *\n       *\n       *\n * * *\n       *\n       *\n       *\n * * *\n\n";
        } else if(n[i] == '4'){
            cout << "*      *\n*      *\n*      *\n * * *\n       *\n       *\n       *\n\n";
        } else if(n[i] == '5'){
            cout << " * * *\n*\n*\n*\n * * *\n       *\n       *\n       *\n * * *\n\n";
        } else if(n[i] == '6'){
            cout << " * * *\n*\n*\n*\n * * *\n*      *\n*      *\n*      *\n * * *\n\n";
        } else if(n[i] == '7'){
            cout << " * * *\n       *\n       *\n       *\n\n       *\n       *\n       *\n\n";
        } else if(n[i] == '8'){
            cout << " * * *\n*      *\n*      *\n*      *\n * * *\n*      *\n*      *\n*      *\n * * *\n\n";
        } else if(n[i] == '9'){
            cout << " * * *\n*      *\n*      *\n*      *\n * * *\n       *\n       *\n       *\n * * *\n\n";
        }
    }
}