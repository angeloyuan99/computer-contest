#include<iostream>
using namespace std;
int main(){
    int n, flips, needed = 0;
    cin >> n >> flips;
    int permutation[n], optimal[n];
    for(int i = n, j = 0; i > 0; i--, j++){
        optimal[j] = i;
    }
    for(int i = 0; i < n; i++){
        cin >> permutation[i];
    }
    for(int i = 0; i < flips; i++){
        cout << permutation[i] << "\n" << optimal[i] << "\n";
        if(permutation[i] == optimal[i]){
            continue;
        }
        for(int j = i + 1; j < n; j++){
            if(permutation[j] == optimal[i]){
                int temp = permutation[i];
                permutation[i] = optimal[i];
                permutation[j] = temp;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << permutation[i] << " ";
    }
    cout << "\n";
}