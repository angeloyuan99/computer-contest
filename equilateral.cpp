#include<iostream>
#include<math.h>
using namespace std;
double getArea(double base, double height){
    return base * height / 2;
}
int main(){
    double base1, base2, base3, height1, height2, height3;
    cin >> base1 >> height1 >> base2 >> height2 >> base3 >> height3;
    double area1 = getArea(base1, height1), area2 = getArea(base2, height2),area3 = getArea(base3, height3);
    cout << max(area1, area2, area3);
}