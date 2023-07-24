#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 2){
        int a, b;
        cin >> a >> b;
        if((a + b) % 2 == 0){
            cout << 2 << "\n";
        } else{
            cout << 1 << "\n";
        }
        return 0;
    }
    vector<double> bowls;
    for(int i = 0; i < n ; i++){
        double input;
        cin >> input;
        bowls.push_back(input);
    }
    sort(bowls.begin(), bowls.end());
    for(int i = 0; i < bowls.size() - 1; i++){
        for(int j = i + 1; j < bowls.size(); j++){
            if(binary_search(bowls.begin(), bowls.end(), (bowls[i] + bowls[j]) / 2)){
                cout << 3 << "\n";
                return 0;
            }
        }
    }
    cout << 2 << "\n";
    return 0;

}