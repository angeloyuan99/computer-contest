#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> I;
    int Index[1000009];
    int Udexp[1000009];
    for(int i = 0; i < 1000009; i++){
        Index[i] = 0;
        Udexp[i] = 0;
    }
    vector<int> U;
    for(int i = 0;i < 2*n; i++){
        char input;
        cin >> input;
        if(input == 'I'){
            I.push_back(i);
            Index[i] = 1;
        } else if(input == 'U'){
            U.push_back(i);
            Udexp[i] = 1;
        }
    }
    int x = 0;
    for(int i = 0; i < I.size() * 2; i+= 2){
        if(I[i / 2] != i){
            x += (I[i / 2] - i);
            U[i / 2] = I[i / 2];
        }
    }
    cout << x << "\n";
} 