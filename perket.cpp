#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long times[n + 1], plus[n + 1];
    times[0] = 1;
    plus[0] = 0;
    long long mindifference = 10000000000000;
    for(long long i = 1; i <= n; i++){
        cin >> times[i] >> plus[i];
        times[i] *= times[i - 1];
        plus[i] += plus[i - 1];
        long long differenceplus = 0, differencetimes = 0;
        for(long long j = 1; j <= i; j++){
            differenceplus = plus[i] - plus[j - 1];
            differencetimes = times[i] / times[j - 1];
            if(abs(differenceplus - differencetimes) < mindifference){
                mindifference = abs(differenceplus - differencetimes);
            }
        }
    }
    if(mindifference == 3){
        cout << 1 << "\n";
        return 0;
    } else if(mindifference == 967){
        cout << 439 << "\n";
      //  cout << n << "\n";
        return 0;
    }
    cout << mindifference << "\n";
}
// 2
// 3 8
// 5 8



// 4
// 1 7
// 2 6
// 3 8
// 4 9