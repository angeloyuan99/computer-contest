#include<iostream>
using namespace std;
int main(){
    cout << "Ready" << "\n";
    while(true){
        string input;
        getline(cin, input);
        if(input == "  "){
            return 0;

        } else if(input == "qp"){
            cout << "Mirrored pair" << "\n";
        } else if(input == "pq"){
            cout << "Mirrored pair" << "\n";
        } else if(input == "bd"){
            cout << "Mirrored pair" << "\n";
        } else if(input == "db"){
            cout << "Mirrored pair" << "\n";
        } else{
            cout << "Ordinary pair" << "\n";
        }
    }
    return 0;
}