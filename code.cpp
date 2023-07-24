#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cin >> a;
    int heights[a + 1];
    for(int i = 0; i <= a; i++){
        cin >> heights[i];
    }
    double totalwidth = 0;
    for(int i = 0; i < a; i++){
        double width;
        cin >> width;
        totalwidth += width * (heights[i] + heights[i + 1]) / 2;
        
     //   cout << (heights[i] * width) + (abs(heights[i + 1] - heights[i]) * width / 2) << "\n";
    }
    cout << fixed << totalwidth << "\n";
}