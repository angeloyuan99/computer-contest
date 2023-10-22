#include<iostream>
#include<algorithm>
using namespace std;
bool blah(int a, int b){
    int first = a % 10, second = b % 10;
    if(first == second){
        return a > b;
    }
    return first < second;
}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    sort(arr, arr + N, blah);
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}