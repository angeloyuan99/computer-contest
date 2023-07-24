#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int num[n + 1];
    int numPosition[n + 1];
    for (int i = 1; i <= n; i++) {
        int j;
        cin >> j;
        num[i] = j;
        numPosition[j] = i;
    }
    for (int i = 1; i <= n; i++) {
        // i is the position of sequence
        // j is the number should be at position i
        int j = n - i + 1;
        // end loop if no more swaps 
        if(k == 0) {
            break;
        }
        if(numPosition[j] != i) {
            // use swap
            k--;
            // j2 is current number at position 1
            int j2 = num[i];
            // swap
            num[i] = j;
            num[numPosition[j]] = j2;
            numPosition[j2] = numPosition[j];
            numPosition[j] = i;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << num[i] << " ";
    }
    cout << "\n";
    return 0;
}