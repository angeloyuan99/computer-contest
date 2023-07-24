#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void reverseStr(string& str){ 
    long long n = str.length(); 
    for (long long i = 0; i < n / 2; i++){
        swap(str[i], str[n - i - 1]); 
    }
} 
int main(){
    string a, b;
    cin >> a >> b;
    reverseStr(a);
    reverseStr(b);
    long long aint = stoll(a), bint = stoll(b);
    if(aint < bint){
        cout << aint << "\n";
    } else{
        cout << bint << "\n";
    }
}