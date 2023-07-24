#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int temperatures[n];
    for(int i = 0; i < n; i++){
        cin >> temperatures[i];
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        int total = 0;
        for(int j = 0; j < k; j++){
            total += temperatures[i + j];
        }
        if(total > max){
            max = total;
            cout << "\n\n\n" << max << "\n\n\n";
        }
    }
    //cout << max << "\n";
    return 0;
}