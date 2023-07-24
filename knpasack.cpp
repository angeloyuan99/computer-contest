#include<iostream>
#include<algorithm>
using namespace std;
struct comp {
    bool operator()(int const &i, int const &j) const {
        return i > j;
    }
};
int main(){
    long long n, queries;
    cin >> n >> queries;
    long long numbers[n];
    for(long long i = 0; i < n; i++){
        cin >> numbers[i];
    }
    sort(numbers, numbers + n, comp());
    // for(long long i = 0; i < n; i++){
    //     cout << numbers[i] << "\n";
    // }
    long long psa[n];
    for(long long i = 0; i < n; i++){
        psa[i] = 0;
    }
    psa[0] = numbers[0];
    for(long long i = 1; i < n; i++){
        if(numbers[i] < 0){
            numbers[i] = 0;
        }
        psa[i] = (numbers[i] + psa[i - 1]);
    }
    for(long long i = 0; i < queries; i++){
        long long k;
        cin >> k;
        cout << psa[k - 1] << "\n";
    }
    
}
// 5 3
// 3 -2 5 4 -7
// 1
// 3
// 5