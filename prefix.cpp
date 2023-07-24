#include<iostream>
using namespace std;
int main(){
    long long end, n1;
    cin >> end >> n1;
    long long pfa[end], start = 0;
    pfa[0] = 0;
    for(long long i = 1; i <= end; i++){
        cin >> pfa[i];
        pfa[i] += pfa[i - 1];
    }
    for(long long i = 0; i < n1; i++){
        long long split;
        cin >> split;
        long long left = pfa[start + split] - pfa[start], right = pfa[end] - pfa[start + split];
        if(left >= right){
            cout << left << "\n";
            start += split;
           // cout << "newstart: " << start << "\n";
        } else{
            cout << right << "\n";
            end -= (end - split);
            //start += split;
       //     cout << "newend: " << end << "\n";
        }
    }
    return 0;

}
// 8 3
// 6 1 3 2 9 10 2 4
// 4
// 1
// 1