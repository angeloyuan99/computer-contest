#include<iostream>
using namespace std;
int main(){
    int n,  k;
    cin >> n >> k;
    string input[n];
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    int linelength = 0;
    for(int i = 0; i < n; i++){
        if(linelength + input[i].length() > k){
            linelength = 0;
            cout << "\n";
            i--;
        } else{
            linelength += input[i].length();
            cout << input[i] << " ";
        }
    }
    return 0;

}