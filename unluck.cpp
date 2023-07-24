#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> cursed;
vector<int>:: iterator it;
int main(){
    int n;
    cin >> n;
    while (n--){
        int a;
        cin >> a;
        cursed.push_back(a);
    }
    int floors;
    
    cin >> floors;
    sort(cursed.begin(),cursed.end());
    while(floors--){
        int a;
        cin >> a;
        it = lower_bound(cursed.begin(),cursed.end(),a);
        int i = it-cursed.begin();
     
        cout << a-i << "\n";
        
    }
    
}