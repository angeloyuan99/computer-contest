#include<iostream>
using namespace std;
int main(){
    int n, longest = 0, current = 0;
    cin >> n;
    int lengths[n], numbers[n];
    for(int i = 0; i < n; i++){
        lengths[i] = 1;
    }
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    for(int i = 1; i < n; i++){
        if(abs(numbers[i] - numbers[i - 1]) <= 2){
            lengths[i - 1]++;
            lengths[i] = lengths[i - 1];
        }
    }
    int largest = -1;
    for(int i = 0; i < n; i++){
        if(lengths[i] > largest){
            largest = lengths[i];
        }
    }
    cout << largest << "\n";
}