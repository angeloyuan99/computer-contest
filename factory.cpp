#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        int total = 0, arrs[k], arrm[k];
        for(int j = 0; j < k; j++){
            cin >> arrs[j];
        }
        for(int j = 0; j < k; j++){
            cin >> arrm[j];
        }
        for(int j = 0; j < k; j++){
            total += arrs[j] * arrm[j];
        }
        cout << total << "\n";
    }
}