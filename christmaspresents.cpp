#include<iostream>
using namespace std;
int earliest[1000010];
int latest[1000010];
bool condition = false;
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int input;
        cin >> input;
        if(earliest[input] == 0){
            earliest[input] = i;
        }
        latest[input] = i;
    }
    for(int i = 1; i <= n; i++){
 //       cout << earliest[i] << " " << latest[i] << "\n";
    }
    int minimum = 0;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        int n = latest[b] - earliest[a];
        if(latest[b] == 0 || earliest[a] == 0){
            continue;
        }
    //    cout << latest[b] << " " << earliest[a] << "\n";
        if(n >= minimum){
            minimum = n ;
            condition = true;
        }
    }
    if(minimum == 0 && !condition){
        cout << 0 << "\n";
        return 0;
    }
    cout << minimum + 1 << "\n";
}