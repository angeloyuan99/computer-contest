#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        double a, b;
        cin >> a >> b;
        double newnum = pow(a, b);
        cout << fixed;
        cout << setprecision(2);
        cout << newnum << "\n";
    }
}