#include<iostream>
#include<algorithm>
using namespace std;
long long n, m, kids[1000000], cnt = 0;
int main(){
    cin >> n >> m;
    for(long long i = 0; i < n; i++){
        cin >> kids[i];
    }
    sort(kids, kids + n);
    int temp, counttemp;
    for(long long i = 0; i < n; i++){
        for(long long j = i + 1; j < n; j++){
            if(kids[i] + kids[j] <= m){
                cnt++;
            } else{
                break;
            }
        }
        
    }
    cout << cnt << "\n";
}