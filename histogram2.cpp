#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
long long arr[105];
long long calculator(long long n, long long num){
    long long total = 0;
    for(long long i = 0; i < n; i++){
        total += ((arr[i] - num) * (arr[i] - num));
    }
    return total;
}
int main(){
    long long n;
    cin >> n;
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if(arr[0] == arr[n - 1]){
        cout << "0\n";
        return 0;
    } 
    long long min = 100000000000000000;
    for(long long i = arr[0]; i < arr[n - 1]; i++){
        if(calculator(n, i) < min){
            min = calculator(n, i);
        }
    }
    cout << min << "\n";
}