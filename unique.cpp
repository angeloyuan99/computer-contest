#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <int> input;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        input.insert(a);
    }
    cout << input.size() << "\n";
}