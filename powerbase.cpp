#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        float a, b;
        cin >> a >> b;
        cout << pow(a, b) << "\n";
    }
}