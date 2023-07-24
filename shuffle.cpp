#include<iostream>
using namespace std;
bool checkSemiprime(int num) { 
    int cnt = 0; 
    for (int i = 2; cnt < 2 && i * i <= num; i++){
        while (num % i == 0) {
            num /= i, ++cnt; 
        }
    }
    if (num > 1){
        cnt++; 
    }
    return cnt == 2; 
} 
int main(){
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        if(checkSemiprime(n)){
            cout << "semiprime\n";
        } else{
            cout << "not\n";    
        }
    }
}