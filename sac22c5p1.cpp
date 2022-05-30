#include<iostream>
using namespace std;
int main(){
    int n, c;
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        cout << a + (c*2) << " ";
    }
    cout << "\n";
    return 0;
    
}