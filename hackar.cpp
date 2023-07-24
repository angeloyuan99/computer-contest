#include<iostream>
using namespace std;
int main(){
    int qs, students;
    cin >> qs >> students;
    for(int i = 0; i < students; i++){
        int s, t, r;
        cin >> s >> t >> r;
        int ans = qs / s;
        if(qs % s != 0){
            ans++;
        }
        if(ans % t != 0){
            ans += r * (ans / t);
        } else{
            ans += r * (ans / t - 1);
        }
        cout << ans << "\n";
    }
    return 0;
}