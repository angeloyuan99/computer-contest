#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a;
    cin >> a;
    if(a == "right"){
        if(n % 2 == 0){
            cout << "left\n";
        } else{
            cout << "right\n";
        }
    } else if(a == "left"){
        if(n % 2 == 0){
            cout << "right\n";
        } else{
            cout << "left\n";
        }
    }   

}