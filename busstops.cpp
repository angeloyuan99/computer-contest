#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> numbers;
int binary(int beginning, int end){
    int total = 0, st = 0, last = numbers.size() - 1;
    while(st <= last) {
        int mid = (st + last) / 2;
        if (numbers[mid] <= beginning) {
            st = mid + 1; 
        } else {
            last = mid - 1; 
        }
    }
    cout << st << "\n";
    return total;
}
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, queries;
    cin >> n >> queries;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i < queries; i++){
        int beginning, end;
        cin >> beginning >> end;
        if(beginning > numbers[numbers.size() - 1] || end < numbers[0]){
            cout << "0\n";
            continue;
        }
        vector<int>::iterator abovelow = lower_bound(numbers.begin(), numbers.end(), beginning);
        vector<int>::iterator belowhigh = upper_bound(numbers.begin(), numbers.end(), end);
    //    cout << numbers[(abovelow - numbers.begin())] << "\n";
     //   cout << numbers[(belowhigh - numbers.begin()) - 1] << "\n";
        cout << ((belowhigh - numbers.begin()) - 1) - (abovelow - numbers.begin()) + 1 << "\n";
        //cout << (abovelow - numbers.begin()) << "\n";
     //   binary(beginning, end);
    }
}