#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
map<long long, pair<long long, long long> > x;
map<long long, pair<long long, long long> > y;
int main(){
    long long N;
    cin >> N;
    vector<pair<long long, long long> > input;
    for(long long i = 0, a, b; i < N; i++){
        cin >> a >> b;
        if(x.find(a) == x.end()){
            x[a] = pair<long long, long long> (b, b);
        } else{ 
            x[a] = pair<long long, long long> (max(b, x[a].first), min(b, x[a].second));
        }

        if(y.find(b) == y.end()){
            y[b] = pair<long long, long long> (a, a);
        } else{
            y[b] = pair<long long, long long> (max(a, y[b].first), min(a, y[b].second));
        }

        input.push_back(pair<long long, long long> (a, b));
    }

    long long high = 0;
    for(long long i = 0; i < N; i++){
        long long cx = input[i].first;
        long long cy = input[i].second;
        long long current = max(abs(x[cx].first - cy), abs(cy - x[cx].second)) * max(abs(y[cy].first - cx), abs(cx - y[cy].second));
        if(current > high){
            high = current;
        }

    }

    cout<<high<<"\n";
    return 0;
}

