#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int total = 0;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(input <= m){
            total += input;
        }
    }
    cout << total << "\n";
    return 0;
}