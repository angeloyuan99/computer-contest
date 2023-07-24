#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> arr;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        arr[input]++;
    }
    map<int, int>::iterator itr;
    for(itr = arr.begin(); itr != arr.end(); itr++){
        if(itr->second % 2 == 1){
            cout << itr->first << "\n";
            return 0;
        }
    }
}