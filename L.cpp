#include<iostream>
#include<map>
#include<cstdio>
using namespace std;
int R, T;
char C;
string S, A;
int main () {
        for(int i = 0; i < 10; i++){
        cin >> R >> T >> A;
        long long len = 0;
        map<char, string> m;
        map<char, long long> mm1, mm2;
        for (auto i : A) mm1[i]++;
        char first = A[0], lastt = A.back();
        for (int i=0; i<R; i++) {
            cin >> C >> S;
            m[C] = S;
        }
        for (int i=0; i<T; i++) {
            first = m[first][0];
            lastt = m[lastt][m[lastt].size() - 1];
            for (auto j : mm1) {
                for (auto k : m[j.first]) {
                    mm2[k] += j.second;
                }
            }
            mm1 = mm2;
            mm2.clear();
        }
        for (auto i : mm1) len += i.second;
        cout << first << lastt << " " << len << "\n";
        fflush(stdout);
    }
}