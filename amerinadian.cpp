#include<iostream>
using namespace std;
int main(){
    while(true){
        string a;
        cin >> a;
        if(a == "quit!"){
            return 0;
        } else if(a == "neighbor"){
            cout << "neighbour";
        } else if(a == "color"){
            cout << "colour";
        } else{
            cout << a;
        }
    }
}