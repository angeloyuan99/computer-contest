#include<iostream>
using namespace std;
int arr0[400000];
int arr1[400000];
pair<int, int> pairs[400000];
string input;
int main() {
    for(int i = 0; i < 400000; i++){
        arr0[i] = -1;
        arr1[i] = -1;
    }
    string input;
    cin >> input;
    int temp = 0, temp1 = 0;
    for (int i = 0; i < input.length(); i++) {
        short c = input[i]-'0';
        pair<int, int> p;
        p.first = temp;
        p.second = temp1;
        pairs[i] = p;
        if (c == 0) {
            temp++;
            arr0[temp] = i;
        } else {
            temp1++;
            arr1[temp1] = i;
        }
    }
    int n;
    cin >> n;
    while (n--) {
        int x, y, temp;
        cin >> x >> y >> temp;
        x--;
        if (temp == 0) {
            int num = pairs[x].first;
            int sec = arr0[num+y];
            cout << (sec == -1 ? sec : sec +1);
        } else {
            int num = pairs[x].second;
            int sec = arr1[num+y];
            cout << (sec == -1 ? sec : sec +1);
        }
        cout << "\n";
    }
    return 0;
}