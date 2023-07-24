#include<iostream>
#include<vector>
using namespace std;
vector <int> a;
int memo[1000000];
bool process(int a, int b){return a > b;}
bool howsum(int targetsum, int numbers[], int n){
    if(memo[targetsum] != 0){
        return false;
    }
    if(targetsum == 0){
        return true;
    }
    if(targetsum < 0){
        return false;
    }
    for(int i = 0; i < n; i++){
        int remainder = targetsum - numbers[i];
        if(howsum(remainder, numbers, n) == true){
            memo[targetsum] = 1;
            a.push_back(numbers[i]);
            return true;
        }
    }
    memo[targetsum] = -1;
    return false;

}
int main(){
    int targetsum, n;
    cin >> targetsum >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n, process);
    howsum(targetsum, arr, n);
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << "\n";
    }
}