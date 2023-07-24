#include<iostream>
using namespace std;
int arr[10000000];
int main(){
    int n, q;
    cin >> n >> q;
    int largest = 0;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr[temp]++;
        if(temp > largest){
            largest = temp;
        }
    }
    for(int i = 0; i < n + 3; i++){
        cout << arr[i] << "\n";
    }
    for(int i = 1; i <= largest; i++){
        arr[i] += arr[i - 1];
    }
    for(int i = 0; i < q; i++){
        int low, high;
        cin >> low >> high;
        cout << arr[high] - arr[low - 1] << "\n";
    }
}
// 5 4
// 3 5 10 1 7
// 1 5
// 2 10
// 10 10
// 12 20