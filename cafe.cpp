#include <iostream>
using namespace std;
const long long MM = 1005;
long long cost[MM], val[MM]; long long dp[MM];
int main(){
    long long N, M, K;
    cin >> N >> M >> K;
    for(long long i = 1; i <= N; i++){
        cin >> cost[i] >> val[i];
        for(long long j = cost[i]; j <= K; j++){
            dp[j] = max(dp[j], dp[j - cost[i]] + val[i]);
        }
    }
    for(long long i = 1; i <= M; i++){
        long long q, t, d, a;
        cin >> q >> t >> d >> a;
        for(long long k = 1; k <= a; k = k * 2){
            long long w = k * d, v = k * q * val[t];
            for(long long j = K; j >= w; j--){
                dp[j] = max(dp[j], dp[j - w] + v);
            }
            a -= k;
        }
        long long w = a * d, v = a * q * val[t];
        for(long long j = K; j >= w; j--){
            dp[j] = max(dp[j], dp[j - w] + v);
        }
    }
    cout << dp[K] << endl;
}