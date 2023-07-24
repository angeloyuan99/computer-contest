#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int asc[50005], desc[50005];
    for(int i = 0; i < 50005; i++){
        asc[i] = 100000;
        desc[i] = 100000;
    }
    int temp = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] == temp){
            temp++;
            asc[temp] = i + 1;
        }
    }
    temp = 1;
    for(int j = n - 1, i = 0; j >= 0; j--, i++){
        if(arr[j] == temp){
            temp++;
            desc[temp] = i + 1;
        }
    }
    for(int i = 50004; i >= 0; i--){
        if(asc[i] + desc[i] <= n){
            cout << i - 1 << "\n";
            return 0;
        }
    }
}