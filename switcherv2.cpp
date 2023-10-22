#include<iostream>
#include<vector>
using namespace std;
int a(int arr[], int n){
    pair<int, int> b[n];
    for (int i = 0; i < n; i++){
        b[i].first = arr[i];
        b[i].second = i;
    }
    sort(b, b + n);
    vector <bool> visited(n);
    for(int i = 0; i < n; i++){
        visited[i] = false;
    }
    int ans = 0;

    for (int i = 0; i < n; i++){
        if (visited[i] || b[i].second == i){
            continue;
        }
        int cycle_size = 0;
        int j = i;
        while (!visited[j]){
            visited[j] = 1;
            j = b[j].second;
            cycle_size++;
        }
        if (cycle_size > 0){
            ans += (cycle_size - 1);
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int c;
        cin >> c;
        int arr[c];
        for(int j = 0; j < c; j++){
            cin >> arr[j];
        }
        cout << a(arr, c) << "\n";
    }
}