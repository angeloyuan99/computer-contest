#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        double minpercent = 100;
        for(int j = 0; j < 3; j++){
            double pricea, priceb;
            cin >> pricea >> priceb;
            if((pricea - priceb) / pricea < minpercent){
                minpercent = (pricea - priceb) / pricea;
            }
        }
        cout << fixed;
        cout << setprecision(3);
        cout << minpercent << "\n";
    }
}