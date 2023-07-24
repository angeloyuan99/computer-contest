#include <iostream>
#include<algorithm>
using namespace std;
long long maxdiff = 0;
long long isPairSum(long long A[], long long N, long long X){
    long long i = 0;
    long long j = N - 1;
    while (i < j) {
        if (A[i] + A[j] == X){
            return 1;
        }
        else if (A[i] + A[j] < X){
            if(A[i] + A[j] > maxdiff){
                maxdiff = A[i] + A[j];
            }
            i++;
        }
        else{
            j--;
        }
    }
    return 0;
}
int main(){
    long long n, lim;
    cin >> n >> lim;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long a = isPairSum(arr, n, lim);
    if(a == 1){
        cout << lim << "\n";
    } else{
        cout << maxdiff << "\n";
    }
    return 0;
}