#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int prices[n];
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }
    sort(prices, prices + n);
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout << prices[i] << " ";
        } else{
            cout << prices[n - i] << " ";
        }
    }
    for(int i = 0; i < n / 2; i++){
        cout << "BS";
    }
}