#include <iostream>
using namespace std;
class DisjSet {
    int *rank, *parent, n;
  
public:
    DisjSet(int n)
    {
        rank = new int[n];
        parent = new int[n];
        this->n = n;
        makeSet();
    }
    void makeSet()
    {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    int find(int x)
    {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
  
        return parent[x];
    }
    void Union(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);
        if (xset == yset)
            return;
  
        if (rank[xset] < rank[yset]) {
            parent[xset] = yset;
        }
        else if (rank[xset] > rank[yset]) {
            parent[yset] = xset;
        }
        else {
            parent[yset] = xset;
            rank[xset] = rank[xset] + 1;
        }
    }
};
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    char type[n + 5];
    for(int i = 1; i <= n; i++){
        cin >> type[i];
    }
    DisjSet planets(n + 5);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        if(type[a] == type[b]){
            planets.Union(a, b);
        }
    }
    int counter = 0;
    for(int i = 0; i < k; i++){
        int a, b;
        cin >> a >> b;
        if(planets.find(a) == planets.find(b)){
            counter++;
        }
    }
    cout << counter << "\n";
}