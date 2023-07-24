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
    int n, classes;
    cin >> n >> classes;
    DisjSet people(n);
    for(int i = 0; i < classes; i++){
        int N;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < N - 1; i++){
            people.Union(arr[i], arr[i + 1]);
        }
    }
    int ebola = people.find(1);
    int ans[n], counter = 0;
    for(int i = 1; i <= n; i++){
        if(people.find(i) == ebola){
            ans[counter] = i;
            counter++;
        }
    }
    cout << counter << "\n";
    for(int i = 0; i < counter; i++){
        cout << ans[i] << " ";
    }
    return 0;

}