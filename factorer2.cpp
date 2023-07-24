#include<iostream>
#include<math.h>
#include<cstring>
#include<algorithm>
using namespace std;
int arr[10000009];
void filler(){
    bool prime[10000009];
    memset(prime, true, sizeof(prime));
    for(int i = 2; i < 10000009; i++){
        if(prime[i] == true){
            for (int j = i; j < 10000009; j += i){
                prime[j] = false;
                arr[j]++;
            }
        }
    }
}  
int main(){
    filler();
    long long n;
    cin >> n;
    for(long long i = 0; i < n; i++){
        long long a, b, c, counter = 0;
        cin >> a >> b >> c;
        for(long long j = a; j <= b; j++){
            if(arr[j] == c){
                counter++;
            }
        }
        cout << "Case #" << i + 1 << ": " << counter << "\n";
    }
}
// 5
// 5 15 2
// 2 10 1
// 24 42 3
// 1000000 1000000 1
// 1000000 1000000 2
