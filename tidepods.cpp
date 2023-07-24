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
    int low = n / 2 - 1;
    int high = n / 2;
    if(n % 2 == 0){

    } else{
        low++;
        high++;
    }
    for(int i = 2; i < n + 2; i++){
        if(i % 2 == 0){
            cout << arr[low] << " ";
            low--;
        } else{
            cout << arr[high] << " ";
            high++;
        }
    }
    cout << "\n";
    return 0;
}