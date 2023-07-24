#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> set;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        set.insert(a);
    }
    cout << set.size() << "\n";
}