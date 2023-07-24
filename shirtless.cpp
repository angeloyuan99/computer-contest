#include<iostream>
#include<map>
using namespace std;
int main(){
    int N, M, D, cnt, clean, dirty, A[1010];
    for(int l = 0; l < 10; l++){
        cnt = 0, dirty = 0;
        cin >> N >> M >> D;
        map<int, int> a;
        clean = N;
        for (int i=0; i<M; i++) {
            cin >> A[i];
            a[A[i]]++;
        }
        for (int i = 1; i <= D; i++) {
            if (clean == 0) {
                cnt++;
                clean = dirty;
                dirty = 0;
            }
            if (a[i] > 0) clean += a[i];
            dirty++;
            clean--;
        }
        cout << cnt << "\n";
    }
}