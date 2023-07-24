#include<iostream>
#include <algorithm>
#include <cmath>
#include<iomanip>
using namespace std;
int main(){
    int num;
    cin >> num;
    double arr[num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    double smallest = 1000000000;
    sort(arr, arr + num);
    for(int i = 1; i < num - 1; i++){
        double left = (arr[i] - arr[i - 1]) / 2, right = (arr[i + 1] - arr[i]) / 2; 
        double size = abs(left)+abs(right);
        if(size < smallest){
            smallest = size;
        }
    }
    cout << fixed;
    cout << setprecision(1);
    cout << smallest << "\n";
    return 0;
}