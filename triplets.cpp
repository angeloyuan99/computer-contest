#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n, counter = 0;
    cin >> n;
    long long input[n];
    for(long long i = 0; i < n; i++){
        cin >> input[i];
    }
    sort(input, input + n);       
    for(long long i = 0; i < n - 2; i++){
        for(long long j = i + 1; j < n - 1; j++){
            if(binary_search (input, input + n, input[i] + input[j])){
                counter++; 
            }
        }
    }
    if(counter == 0){
        cout << "-1\n";
        return 0;

    }
    cout << counter << "\n";
    return 0;

}