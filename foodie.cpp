#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long long n, questions;
    cin >> n >> questions;
    double foods[n + 1];
    foods[0] = 0;
    for(long long i = 1; i <= n; i++){
        cin >> foods[i];
        foods[i] = (foods[i] + foods[i - 1]);
    }
    for(long long i = 0; i < questions; i++){
        long long start1, end1, start2, end2;
        cin >> start1 >> end1 >> start2 >> end2;
        double total1 = foods[end1] - foods[start1 - 1];
        double total2 = foods[end2] - foods[start2 - 1];
     //   cout << total1 << " " << total2 << "\n";
        double half1, half2, ten1, ten2;
        if(total1 <= 10){
            ten1 = 0;
        } else{
            ten1 = total1 - 10;
        }
        half1 = total1 / 2.0;
        if(total2 <= 10){
            ten2 = 0;
        } else{
            ten2 = total2 - 10;
        }
        half2 = total2 / 2.0;
      //  cout << half1 << " " << half2 << " " << ten1 << " " << ten2 << "\n";
        if((half1 + ten2) <= (half2 + ten1)){
            cout << fixed << setprecision(1) << (total1 + total2) - (half1 + ten2) << "\n";
            
        } else{
           cout << fixed << setprecision(1) << (total1 + total2) - (half2 + ten1) << "\n";
        }
    }
}
    // 5 3
    // 1 10 5 5 5
    // 1 1 3 4
    // 2 3 4 5
    // 2 2 3 4