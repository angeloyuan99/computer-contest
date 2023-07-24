#include<iostream>
using namespace std;
bool fourdivisorcheck(int n){
    int divisorcounter = 2;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            divisorcounter++;
        }
    }
    if(divisorcounter != 4){
        return false;
    }
    return true;
}
int main(){
    int bottom, high, divisorcounter = 0;
    cin >> bottom >> high;
    for(int i = bottom; i <= high; i++){
        if(fourdivisorcheck(i) == true){
            divisorcounter++;
        }
    }
    cout << "The number of RSA numbers between " << bottom <<" and " << high << " is " << divisorcounter << "\n";
}