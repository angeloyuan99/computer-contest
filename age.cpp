#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int year, month, date;
        cin >> year >> month >> date;
        if(year < 1989){
            cout << "Yes\n";
            continue;
        } else if(year > 1989){
            cout << "No\n";
            continue;
        } else if(year == 1989){
            if(month < 2){
                cout << "Yes\n";
                continue;
            } else if(month > 2){
                cout << "No\n";
                continue;
            } else if(month == 2){
                if(date <= 27){
                    cout << "Yes\n";
                    continue;
                } else{
                    cout << "No\n";
                    continue;
                }
            }
        }
    }
}