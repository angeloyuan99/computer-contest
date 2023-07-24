#include <iostream>
#include <set>
using namespace std;
int main(){
    int num;
    set<int> set;
    cin>>num;
    for(int i = 0; i < num; i++){
        int test;
        cin>>test;
        set.insert(test);
    }
    cout<<set.size()<<endl;
    return 0;
}