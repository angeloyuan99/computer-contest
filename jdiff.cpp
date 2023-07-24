#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int counter = 0;
    if(n % 2 == 0){
        int half = n/2;
        int total = 0;
        total += arr[half];
        for(int i = 0; i < (half - 1); i++){

        }
        cout << total << "\n";
    } else{

    }
}