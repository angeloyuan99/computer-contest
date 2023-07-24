#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int j;
        cin >> j;
        if(j == 2){
            cout << 2 << "\n";
        } else{
            cout << j - 1 << "\n";
        }
    }
    return 0;

}