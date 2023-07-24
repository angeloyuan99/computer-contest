#include<iostream>
using namespace std;
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
int main(){
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        cout << n << " = ";
        if(isPrime(n)){
            cout << n << "\n";
        } else if(n % 2 == 0){
            for(int p = n/2; p >= 3; p--){
                if(isPrime(p) && isPrime(n - p)){
                    cout << p << " + " << (n - p) << "\n";
                    break;
                }
            }
        } else{
            bool done = false;
            for(int p = n/3; p>= 3 && !done; p--){
                if(!isPrime(p)){
                    continue;
                }
                int x = n - p;
                for(int q = x / 2; q >= p && !done; q--){
                    if(isPrime(q) && isPrime(x - q)){
                        cout << p << " + " << q << " + " << n - p - q << "\n";
                        done = true;
                    }
                }
            }
        }
    }
}
// 49
// 152029
// 90118
// 4565973
// 705510