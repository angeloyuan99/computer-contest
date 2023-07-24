#include<iostream>
using namespace std;
bool primecheck(int n) { 
    if (n <= 1) 
        return false; 
  
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
    return true; 
} 
int main(){
    int a, b, c, total = 0;
    cin >> c;
    for(int j = 0; j < c; j++){
        cin >> a >> b;
    for(int i = 0; i <= a; i++){
        if(primecheck(i)){
            total += i;
        }
    }
    for(int i = 0; i <= b; i++){
        if(primecheck(i)){
            total += i;
        }
    }
    cout << total << "\n";
    }
}