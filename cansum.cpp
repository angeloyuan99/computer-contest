#include<iostream>
using namespace std;
int memo[1000000];
bool cansum(int targetsum, int numbers[], int n){
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
        if(cansum(remainder, numbers, n) == true){
            memo[targetsum] = 1;
            return true;
        }
    }
    memo[targetsum] = -1;
    return false;

}
int main(){
    int targetsum, n;
    cin >> targetsum >> n;
    int numbers[n];
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    cout << cansum(targetsum, numbers, n) << "\n";
}