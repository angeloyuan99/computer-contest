#include<iostream>
using namespace std;
int main(){
    int n, max = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int length, weight;
        cin >> length >> weight;
        if(length * weight > max){
            max = length * weight;
        }
    }
    int c, newmax = 0;
    cin >> c;
    for(int i = 0; i < c; i++){
        int length, weight;
        cin >> length >> weight;
        if(length * weight > newmax){
            newmax = length * weight;
        }
    }
    if(newmax > max){
        cout << "Natalie\n";
    } else if(max > newmax){
        cout << "Casper\n";
    } else{
        cout << "Tie\n";
    }
    return 0;

}