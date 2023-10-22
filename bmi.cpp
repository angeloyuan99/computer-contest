#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> heights;
    vector<int> weights;
    for (int i = 0; i < n + 1; i++){
        int x;
        cin >> x;
        heights.push_back(x);
    }
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        weights.push_back(x);
    }

    double area = 0;
    for (int i = 0; i < n; i++) {
        area += double(weights[i]) * (double(heights[i]) + double(heights[i+1]))/2.;
    }

    cout << fixed << area << "\n";
}