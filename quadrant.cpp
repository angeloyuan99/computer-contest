#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    if(x > 0 && y > 0){
        cout << "1\n";
        return 0;
    }
    if(x > 0 && y < 0){
        cout << "4\n";
        return 0;
    }
    if(x < 0 && y < 0){
        cout << "3\n";
        return 0;
    }
    if(x < 0 && y > 0){
        cout << "2\n";
        return 0;
    }
}