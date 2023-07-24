#include<iostream>
#include<algorithm>
using namespace std;
bool process(long long a, long long b){
    return a > b;
}
int main(){
    long long N, M, K;
    cin >> N >> M >> K;
    long long input[K];
    for(long long i = 0; i < K; i++){
      cin >> input[i];
    }
    sort(input, input + K, process);
    long long rows = K / N;
    if(K % N != 0){
        rows++;
    }
    long long counter = rows, ans = 0, count2 = 0;
    long long arr[rows];
    for(long long i = 0; i < rows; i++){
        arr[i] = input[i];
    }
    // bool condition = false;
    while(counter < K){
        for(long long i = 1; i < N; i++){
            if(counter >= K){
                break;
            }
            ans += arr[count2] - input[counter] + i;
            counter++;
        }
        count2++;
    }
    cout << ans << "\n";
    return 0;
}
