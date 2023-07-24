#include<iostream>
#include<vector>
#include<set>
using namespace std;
int r, c;
vector<string> lights;
set<string> process(int n){
    set<string> result;
    if(n == 0){
        result.insert(lights[n]);
        return result;
    }
    set<string> next = process(n-1);
    string curr = lights[n];
    result.insert(curr);
    for(auto it : next){
        string temp = "";
        for(int i = 0; i < c; i++){
            if(it[i] == curr[i])temp += '0';
            else temp += '1';
        }
        result.insert(temp);
    }
    return result;
}
int main()
{
    cin>>r>>c;
    for(int i = 0; i < r; i++){
        string temp = "";
        for(int j = 0; j < c; j++){
            char t;
            cin>>t;
            temp += t;
        }
        lights.push_back(temp);
    }
    set<string> filler = process(r-1);
    cout<<filler.size()<<"\n";
    return 0;
}
