#include<iostream>
#include<map>
#include<math.h>
using namespace std;
int mypow(char c, int p) {
    int result = 1;
    for (int i=1; i<=p; i++) {
        result *= c;

        result %= 1000;
    }

    return result;
}

int mypow2(char c, int p) {
    return pow(c%10, p % 4 + 1);
}
int value(string s) {
    long long v = 0;
    for(int i=0; i<s.length(); i++) {
        char c = tolower(s[i]);
        v += mypow2(c - 'a' + 1, i);
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