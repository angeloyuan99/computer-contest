#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    double min = 99999;
    for(int i = 0; i < n; i++){
        double input;
        cin >> input;
        if(input < min){
            min = input;
        }
    }
    cout << fixed;
    cout << setprecision(2);
    cout << min;
    return 0;
}