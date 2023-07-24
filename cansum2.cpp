#include<iostream>
using namespace std;
bool cansum(int targetsum, int numbers[], int n){
    bool table[targetsum + 1];
    for(int i = 0; i < targetsum + 1; i++){
        table[i] = false;
    }
    table[0] = true;
    for(int i = 0; i <= targetsum; i++){
        if(table[i] == true){
            for(int j = 0; j < n; j++){
                table[i + numbers[j]] = true;
            }
        }
    }
    return table[targetsum];
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