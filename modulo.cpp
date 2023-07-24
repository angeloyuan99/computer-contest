#include<iostream>
using namespace std;
int main(){
    int x, y, z;
    cin >> x >> y >> z;
    for(int i = i; i < 100000000; i++){
        if((x * i) % y == z){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
    
}