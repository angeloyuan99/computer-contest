#include <iostream>
#include <cstdio>
using namespace std;
const int MAXN = 1000005;
const int inf = 1 << 30;
int x[MAXN], y[MAXN];
int d1[2*MAXN], d2[2*MAXN];
int n, k;

int main(){
    int sol = inf;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
	int r, s;
        cin >> r >> s;
        x[r]++;
        y[s]++;
        d1[r-s+MAXN]++;
        d2[r+s]++;
        if (x[r] == k || y[s] == k || d1[r-s+MAXN] == k || d2[r+s] == k) {
            if (i+1 < sol){
                sol = i + 1;
            }
        }
    }

    if (sol < inf) cout << sol << "\n";
    else cout << "-1\n";
    return 0;
}