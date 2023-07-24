#include<iostream>
using namespace std;
bool primecheck(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int lower, higher, answer = 0;
        cin >> lower >> higher;
        for(int j = lower + 1; j < higher; j++){
            if(primecheck(j)){
                answer++;
            }
        }
        cout << answer << "\n";
    }
}