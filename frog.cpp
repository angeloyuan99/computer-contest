#include<iostream>
using namespace std;
int main(){
    int n;
    double useless, k, x;
    cin >> n >> useless >> k >> x;
    double speeds[n];
    for(int i = 0; i < n; i++){
        cin >> speeds[i];
    }
    double compare;
    cin >> compare;
    for(int i = 0; i < n; i++){
        if(speeds[i] > compare){
            while(speeds[i] >= compare){
                speeds[i] = (speeds[i] * ((100 - x) / 100));
                k--;
                //cout << speeds[i] << "\n";
            }
        }
    }
    if(k < 0){ 
        cout << "YES\n";
    } else{
        cout << "NO\n";
    }
}