#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long ll;
long long N;
long long input[21], limit[21];
long long arr[21];
int main(){
    cin >> N;
    for(long long i = 0; i < N; i++){
        cin >> input[i];
    }
    sort(input, input + N);
    for(long long i = 0; i < N; i++){
        cin >> limit[i];
    }
    sort(limit, limit + N);
    for(long long i = 0; i < N; i++){
        for(long long j = 0; j < N; j++){
            if(input[j] <= limit[i]){
                arr[i]++;
            }
            else break;
        }
    }
    long long ans = 1;
    for(long long i = 0; i < N; i++)ans *= arr[i] - i;
    cout << max(ans, ll(0))<<"\n";
    return 0;
}