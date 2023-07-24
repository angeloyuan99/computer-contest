#include<iostream>
#include<math.h>
#include<list>
using namespace std;
int factor[100005];
int main(){
    list <int> arr[100005];
    for(int i = 1; i < 100005; i++){
        for(int j = i; j < 100005; j += i){
            factor[j]++;
        }
    }
    for(int i = 1; i < 100005; i++){
        arr[factor[i]].push_back(i);
    }
    int n, k, a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        int counter = 0;
        cin >> k >> a >> b; 
    }
}