#include<iostream>
using namespace std;
int a[1000000000];
int main(){
    int station, min, waves;
    cin >> station >> min >> waves;
    for(int i = 1; i <= waves; i++){
        int x, y, z;
        cin >> x >> y >> z;
        a[x] += z;
        a[y + 1] -= z;
    }
    int ans = 0;
    for(int i = 1; i <= station; i++){
        a[i] += a[i - 1];
        if(a[i] < min){
            ans++;
        }
    }
    cout << ans << "\n";
}