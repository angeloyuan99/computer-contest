#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        cout << a;
        if(a % 6 == 0){
            cout << " is nasty\n";
        } else{
            cout << " is not nasty\n";
        }
    }
    return 0;
    
}