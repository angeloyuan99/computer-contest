#include<iostream>
using namespace std;
int main(){
    int numbers, multiple;
    cin >> numbers >> multiple;
    int psa[numbers];
    for(int i = 0; i < numbers; i++){
        cin >> psa[i];
    }
    for(int i = 1; i < numbers; i++){
        psa[i] += psa[i - 1];
    }
    int longest = 0;
    for(int i = 0; i < numbers; i++){
        for(int j = i; j < numbers; j++){
            if((psa[j] - psa[i]) % multiple == 0 && j - i > longest){
                longest = j - i;
            }
        }
    }
    cout << longest << "\n";
}