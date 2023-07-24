#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(long long a, long long b){
    return a > b;
}
int main(){
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n, cmp);
    // for(long long i = 0; i < n; i++){
    //     cout << arr[i] << "\n";
    // }
    int ans = 0;
    for(long long i = 0; i < n; i++){
        if(i <= arr[i]){
            ans++;
        } else{
            break;
        }
    }
    cout << ans << "\n";
    return 0;

}