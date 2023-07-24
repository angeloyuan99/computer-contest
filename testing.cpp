#include<iostream>
using namespace std;
int main(){
    int a, b, c, columnsneeded;
    cin >> a >> b >> c;
    for(int i = 0; i <= b; i++){
        if(a * i >= c){
            columnsneeded = i;
            break;
        }
    }
    cout << columnsneeded << "\n";
}