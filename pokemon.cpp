#include<iostream>
using namespace std;
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int a1 = A / B;
    int b1 = B * a1;
    cout << b1 + (A % B);
}