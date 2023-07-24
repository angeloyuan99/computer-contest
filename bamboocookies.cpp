#include<iostream>
using namespace std;
int main(){
    int n, odd = 0, even = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a % 2 == 0){
            even++;
        } else{
            odd++;
        }
    }
    cout << odd/2 + even/2 << "\n";
}