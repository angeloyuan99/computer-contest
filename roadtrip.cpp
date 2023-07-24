#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double up, level, down;
    cin >> up >> level >> down;
    up /= 1000;
    level /= 1000;
    down /= 1000;
    up = (up / 40) * 60;
    down = (down / 70) * 60;
    double min = down + level + up;
    cout << fixed << setprecision(2) << min << "\n";
}