#include<iostream>
using namespace std;
int main(){
    int times[100];
    for(int i = 0 ; i < 100; i++){
        times[i] = 0;
    }
    int a, b, c;
    cin >> a >> b >> c;
    for(int i = 0; i < 3; i++){
        int x, y;
        cin >> x >> y;
        for(int j = x; j < y; j++){
            times[j]++;
        }
    }
    int kunais = 0;
    for(int i = 0; i < 100; i++){
        if(times[i] == 1){
            kunais += a;
        } else if(times[i] == 2){
            kunais += (b * 2);
        } else if(times[i] == 3){
            kunais += (c * 3);
        }
    }
    cout << kunais << "\n";
    return 0;

}