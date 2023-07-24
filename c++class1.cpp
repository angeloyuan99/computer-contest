#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return true;
        }
    }
    return false;
}
int GCD(int a, int b){
    int GCD = 1;
    for(int i = 1; i < a; i++){
        if(a % i == 0 && b % i == 0){
            GCD = i;
        }
    }
    return GCD;
}
string reversestring(string a){
    for(int i = 0; i < a.length() / 2; i++){
        char temp = a[i];
        a[i] = a[a.length() - i];
        a[a.length() - i] = temp;
    }
    return a;
}
int main(){
    int a, b, c;
    string reversed;
    cout << "isprime check:\n";
    cin >> a;
    cout << "GCD check:\n";
    cin >> b >> c;
    cout << "reversestring check:\n";
    cin >> reversed;
    cout << isprime(a) << "\n";
    cout << GCD(b, c) << "\n";
    cout << reversestring(reversed) << "\n";
}