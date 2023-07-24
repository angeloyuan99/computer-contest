#include<iostream>
#include<algorithm>
using namespace std;
int n, m, a[1000000], cnt = 0;
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int pastcnt = 0;
    for(int i = 0; i < n; i++){
        if(i > 0 && a[i] == a[i - 1]){
            cnt += (pastcnt - 1);
            pastcnt = 0;
           // cout << "same " << pastcnt << "\n";
            continue;
        }
        pastcnt = 0;
        for(int j = i + 1; j < n; j++){
            if(a[i]+a[j] <= m){
                cnt++;
                pastcnt++;
            }
        }
    }
    cout << cnt << "\n";
}