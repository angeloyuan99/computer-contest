#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[26];
    for(int i = 0; i < 26; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < n; i++){
        char a;
        cin >> a;
        arr[a - 'a']++;
    }
    int even = 0 , odd = 0;
    for(int i = 0; i < 26; i++){
        if(arr[i] % 2 == 0){
            even++;
        } else{
            odd++;
        }
    }
    cout << max(1, odd) << "\n";
}