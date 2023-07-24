#include<iostream>
using namespace std;
int main(){
    int a, arr1[10] = {100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000}, count;
    cin >> a;
    for(int i = 0; i < a; i++){
        int input;
        cin >> input;
        arr1[input - 1] = 0;
    }
    for(int i = 0; i < 10; i++){
        count += arr1[i];
    }
    count /= (10 - a);
    int bank;
    cin >> bank;
    if(count > bank){
        cout << "deal";
    } else{
        cout << "no deal";
    }
    return 0;
}