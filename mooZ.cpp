#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int curr = a;
    for(int i = 0; i < 3; i++){
        curr += b;
        if(curr >= c){
            cout << curr << "\n";
            return 0;
        }
    }
    cout << "Who knows...\n";
}