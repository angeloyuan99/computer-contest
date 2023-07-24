#include<iostream>
using namespace std;
int main(){
    int n, counter = 0;
    cin >> n;
    char day1[n], day2[n];
    for(int i = 0; i < n; i++){
        cin >> day1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> day2[i];
    }
    for(int i = 0; i < n; i++){
        if(day1[i] == 'C' && day2[i] == 'C'){
            counter++;
        }
    }
    cout << counter << "\n";
    
}