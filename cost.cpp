#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(input >= 0 && input <= 30){
            cout << "38\n";
            continue;
        } else if(input < 30 && input <= 50){
            cout << "55\n";
            continue;
        } else if(input > 50 && input <= 100){
            cout << "73\n";
        } else{
            cout << 73 + (((input - 100) / 50 + 1) * 24) << "\n";
        }
    }
}
// 0 ≤ N ≤ 30 costs 38 cents
// 30 < N ≤ 50 costs 55 cents
// 50 < N ≤ 100 costs 73 cents
// if N > 100 then the base cost is 73 cents, plus 24 cents for every additional 50 grams or part thereof.