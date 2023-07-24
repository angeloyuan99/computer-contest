#include<iostream>
using namespace std;
int main(){
    int c = 0, d = 0, a;
    cin >> a;
    for(int i = 0; i < a; i++){
        char input;
        cin >> input;
        if(input == 'A'){
            c++;
        } else if(input == 'B'){
            d++;
        }
    }
    if(c > d){
        cout << "A";
    } else if(c == d){
        cout << "Tie";
    } else{
        cout << "B";
    }
}