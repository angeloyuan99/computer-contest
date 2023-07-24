#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int j = 0; j < n; j++){
        string input;
        cin >> input;
        int n = input.length();
        char chararr[n];
        for(int i = 0; i < n; i++){
            chararr[i] = input[i]; 
        }
        // for(int i = 0; i < n; i++){
        //     cout << chararr[i];
        // }
        for(int i = 0; i < n; i++){
            if(chararr[i] == 'E'){
                cout << "Educational ";
            } else if(chararr[i] == 'C'){
                cout << "Computing ";
            }
        }
        for(int i = n - 1; n > 0; n -= 2){
            if(chararr[i] == 'O' && chararr[i - 1] == 'O'){
                cout << "Organization of Ontario ";
            }
        }
        cout << "\n";
    }
    return 0;
}