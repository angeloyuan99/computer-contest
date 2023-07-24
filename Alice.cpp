#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int f, lowest = 100, highest = 0;
        cin >> f;
        for(int j = 0; j < f; j++){
            int input;
            cin >> input;
            if(input > highest){
                highest = input;
            }
            if(input < lowest){
                lowest = input;
            }
        }
        cout << lowest << " " << highest << "\n";
    }
}