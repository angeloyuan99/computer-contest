#include<iostream>
using namespace std;
int main(){
    int n, counter = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        if(input.length() <= 10){
            counter++;
        }
    }
    cout << counter << "\n";
    
}