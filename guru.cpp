#include<iostream>
#include<map>
#include<math.h>
#include<stack>
using namespace std;

int mypow(char c, int p) {
    bool used[10];
    int counter = 0;
    stack<int> order;
    for(int i = 0; i < 10; i++){
        used[i] = false;
    }
    int result = 1;
    for (int i=1; i<=10; i++) {
        result *= c;
        result %= 10;
        if(used[result] == true){
            break;
        } else{
            used[result] = true;
            counter++;
            order.push(result);
        }
    }
    
    return result;
}

int value(string s) {
    long long v = 0;
    for(int i=1; i<=s.length(); i++) {
        char c = tolower(s[i - 1]);
        v += mypow(c - 'a' + 1, i);
        // cout << c << " " << (c - 'a' + 1) << " " << i << "\n";
        v = v % 10;
    }
    return v == 0 ? 10 : v;
}

int main() {
    string a, b;
    cin >> a >> b;

    int ans = value(a) + value(b);
    cout << ans << "\n";

    return 0;
}
