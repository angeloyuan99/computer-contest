#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool boolarr[n];
    for(int i = 0; i < n; i++){
        boolarr[i] = true;
    }
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        int mult;
        cin >> mult;
        for(int j = mult; j < n; j += mult){
            boolarr[j] = false;
        }
    }
    for(int i = 0; i < n; i++){
        if(boolarr[i]){
            cout << i << "\n";
        }
    }
}