#include<iostream>
using namespace std;
void selectionSort(int intArr1[], int n){
    for(int i = n - 1; i >= 0; i--){
        //find the max elements in the array from index 0 to i
        // swap it with teh last element which is index i
        int index = 0;
        int max1 = intArr1[index];
        for(int j = 0; j <= i; j++){
            if(intArr1[j] > max1){
                max1 = intArr1[j];
                index = j;
            }
        }
        //we have to swap the elements
        int intTemp = intArr1[i];
        intArr1[i] = max1;
        intArr1[index] = intTemp;
    }
}
int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        int stations[n];
        for(int i = 0; i < n; i++){
            cin >> stations[i];
        }
        if(n < 8){
            cout << "IMPOSSIBLE\n";
            continue;
        }
        selectionSort(stations, n);
        for(int i = 0; i < n - 1; i++){
            if(stations[i + 1] - stations[i] > 200){
                cout << "IMPOSSIBLE\n";
                continue;
            }
        }
        if(1422 - stations[n - 1] > 200){
            cout << 1422 - stations[n - 1] << "\n";
            cout << "IMPOSSIBLE\n";
            continue;
        }
        cout << "POSSIBLE\n";
    }
    return 0;
}
// Sample Input

// 2
// 0
// 900
// 8
// 1400
// 1200
// 1000
// 800
// 600
// 400
// 200
// 0
// 0
// Output Specification
// For each scenario, output a line containing POSSIBLE if Brenda can make the trip. Otherwise,
// output a line containing the word IMPOSSIBLE.
// Output for Sample Input
// IMPOSSIBLE
// POSSIBLE


