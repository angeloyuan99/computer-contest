#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    vector<string> arr[n + 1];
    for(int i = 0; i < q; i++){
        int a, b;
        string c;
        cin >> a >> b >> c;
        if(a == 1){
            if(find(arr[b].begin(), arr[b].end(), c) != arr[b].end()){
                cout << "1\n";
            } else{
                cout << "0\n";
            }
        } else{
            arr[b].push_back(c);
        }
    }
}
// 1 6
// 1 1 test
// 2 1 test
// 2 1 test
// 1 1 test
// 2 1 blah
// 1 1 pf


// 2 6
// 1 1 test
// 2 1 test
// 2 1 test
// 1 2 test
// 2 2 blah
// 1 2 blah