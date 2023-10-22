#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
struct ship {
    int a;
    int b;
    int t;
    int h;
};

class Problem {
    private:
    int k, n;
    vector<ship> *adj;

    public:
    Problem(int k, int n) {
        this->k = k;
        this->n = n;
        this->adj = new vector<ship>[n+1];
    }

    void addEdge(int a, int b, int t, int h) {
        this->adj[a].push_back({a, b, t, h});
        this->adj[b].push_back({b, a, t, h});
    }

    int dijikstra(int a, int b) {
        queue<ship> q;
        q.push({0,a,0,0});
        vector<pair<int, int> > dist(n+1, {INT_MAX,INT_MAX});
        dist[a] = {0,0};
        int result = -1;
        while(!q.empty()) {
            ship curr = q.front();
            q.pop();

            if(curr.b == b)    {
                if(result == -1 || curr.t < result) result = curr.t;
            }
            for(ship next : adj[curr.b]) {
                if(curr.a == next.b) continue;
                if(next.h + curr.h >= k) continue;
                
                pair<int,int> d = dist[next.b];
                
                if(d.first > next.t + curr.t || d.second > next.h + curr.h){
                    dist[next.b] = {min(d.first,next.t + curr.t), min(d.second, next.h + curr.h)};
                    q.push({next.a, next.b, next.t + curr.t, next.h + curr.h});
                }     
            }
        } 

        return result;
    }
};

int main() {
    int k, n, m;
    cin >> k >> n >> m;
    Problem problem(k, n);

    int a, b, t, h;
    for(int i=1; i<=m; i++) {
        cin >> a >> b>> t >> h;
        problem.addEdge(a, b, t, h);
    }

    cin >> a >> b;
    cout << problem.dijikstra(a, b)<<"\n";
    return 0;
}