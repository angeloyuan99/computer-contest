#include<iostream>
using namespace std;
int main(){
    long long n, inputs, min = 10;
    bool zerotrue = false, nonzerotrue = false;
    cin >> n >> inputs;
    for(int i = 0; i < inputs; i++){
        int a;
        cin >> a;
        if(a > 0 && a < min){
            min = a;
            nonzerotrue = true;
        } else if( a == 0){
            zerotrue = true;
        }
    }
    if(zerotrue == true && nonzerotrue == false){
        cout << "-1\n";
        return 0;
    }
    if(min <= 9 && zerotrue == false){
        for(long long i = 0; i < n; i++){
            cout << min;
        }
        cout << "\n";
    } else if(n == 1){
        cout << min << "\n";
    } else{
        cout << min;
        for(int i = 0; i < n - 2; i++){
            cout << 0;
        }
        cout << min;
        cout << "\n";
    }

}