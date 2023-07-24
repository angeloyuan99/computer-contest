#include<iostream>
using namespace std;
bool ifeighteighteight(unsigned long long k){
    if(k * k * k % 1000 == 888){
        return true;
    }else{
        return false;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int k;
        cin >> k;
        while(ifeighteighteight(k) == false){
            k++;
        }
        cout << k << "\n";
    }
}