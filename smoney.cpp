#include<iostream>
using namespace std;
int main(){
    int p, d, b;
    cin >> p >> d >> b;
    int badges = p/d;
    cout << badges * b + (p % d) << "\n";
}