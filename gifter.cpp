#include<iostream>
using namespace std;
int main(){
    int n, budget, max = 0;
    cin >> n >> budget;
    for(int i = 0; i < n; i++){
        int cost, happy;
        cin >> cost >> happy;
        if(cost > budget){
            continue;
        } else if(happy > max){
            max = happy;
        }
    }
    cout << max << "\n";
}