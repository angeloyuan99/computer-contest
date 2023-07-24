#include<iostream>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    int total = 0;
    for(int i = 0; i < a.length(); i++){
        for(int j = 0; j < b.length(); j++){
            total += (a[i] - '0') * (b[j] - '0');
        }
    }
    cout << total << "\n";
}