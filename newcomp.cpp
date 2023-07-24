#include<map>
#include<iostream>
#include<set>
using namespace std;
map<long long int, set<string> > computers;
int main(){
    int num;
    cin >> num;
    if(num == 1){
        string name;
        cin >> name;
        cout << name << "\n";
        return 0;
    }
    if(num == 0)return 0;
    for(int i = 0; i < num; i++){
        string name;
        int a, b, c;
        long long int total;
        cin >> name >> a >> b >> c;
        total = (2 * a) + (3 * b) + c;
        computers[total].insert(name);
    }
    auto rit = computers.rbegin();
    if(rit->second.size() == 1){
        cout << *rit->second.begin() << "\n";
        rit++;
        cout << *rit->second.begin() << "\n";
    }
    else{
        auto temp = rit->second.begin();
        cout << *temp << "\n";
        temp++;
        cout << *temp << "\n";
    }
    return 0;
}
