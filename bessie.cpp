#include<iostream>
#include<algorithm>
using namespace std;
inline int rd(){
    int x = 0; bool f = 0; char c;
    cin >> c;
    while(!isdigit(c)){
        if(c == '-'){
            f = 1;
            cin >> c;
        }
    }
    while(isdigit(c)){
        x = (x << 1) +(x << 3)+(c^48);
        c = getchar();
    }
    return f?-x:x;
}

int n, ans;
struct num{
    int x, p;
}s[100010];

inline bool cmp(num x, num y){
    return x.x==y.x?x.p<y.p:x.x<y.x;
}
int main(){
    n = rd();
    for(int i = 1, x; i <= n; ++i){
        s[i].x = rd();
        s[i].p = i;
    }
    sort(s + 1, s + 1 + n, cmp);
    for(int i = 1; i <= n; ++i){
        ans = max(ans, s[i].p - i + 1);
    }
    cout << ans << "\n";
    return 0;	
}