#include <iostream>
using namespace std;
int main(){
    double money, percent, year, intrest;
    cin>>money;
    cin>>percent;
    cin>>year;
    percent = percent / 100;
    cout<<0<<" ";
    printf("%.2f",money);
    cout<<endl;
    for(int i = 1; i <= year; i++){
        cout<<i<<" ";
        intrest = 0;
        intrest = money*percent;
        money = money + intrest;
        printf("%.2f",money);
        cout<<endl;
    }
    return 0;
}