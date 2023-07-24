#include<iostream>
using namespace std;
double calculatePower(int base, int power){
    if (power == 0){
        return 1;
    }
    if(power < 0){
        return 1 / calculatePower(base, power * -1);
    } else {
        return base * calculatePower(base, power - 1);
    }

}
int main(){
    int a, b;
    cin >> a;
    cin >> b;
    cout << calculatePower(a, b) << "\n";

    return 0;

}