#include<iostream>
using namespace std;
int main(){
    int w, n, total = 0;
    cin >> w >> n;
    int carweights[n];
    for(int i = 0; i < n; i++){
        cin >> carweights[i];
    }
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            sum += carweights[i];
        }
        if(total <= w){
            total++;
        }
    }
    cout << total << "\n";
}