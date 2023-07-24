#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    long long n, limit, total = 0;
    cin >> n >> limit;
    vector<long long> numbers;
    for(long long i = 0; i < n; i++){
        long long k;
        cin >> k;
        if(k > limit){
            continue;
        }
        numbers.push_back(k);
    }
    sort(numbers.begin(), numbers.end());
    for(long long i = numbers.size() - 1; i > 0; i--){
        int k = limit - numbers[i];
        vector<long long>::iterator abovelow = upper_bound(numbers.begin(), numbers.end(), k);
        //cout << numbers[(abovelow - numbers.begin()) - 1] << "\n";
        if(((abovelow - numbers.begin())) >= i){
            total += i;
       //     cout << i + 1 << ": " << i << "\n";
            continue;
        }
       // cout << i + 1 << ": " << (abovelow - numbers.begin()) << "\n";
        total += ((abovelow - numbers.begin()));
    }
    cout << total << "\n";
}