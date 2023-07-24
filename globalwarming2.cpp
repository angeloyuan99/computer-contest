#include<iostream>
using namespace std;
int main(){
    int a, b, n, differences[20];
    cin >> n;
    while(n != 0){
        if(n == 1){
            cin >> a;
            cout << "0\n";
            
        } else{
            cin >> a;
            for(int i = 1; i < n; i++){
                cin >> b;
                differences[i] = b - a;
                a = b;
            }
            int pattern = 1, i = 1;
            while(i + pattern <= n - 1){
                while(i + pattern <= n - 1 && differences[i] == differences[i + pattern]){
                    i++;
                }
                if(i + pattern < n){
                    pattern++;
                }
            }
            cout << pattern << "\n";
            cin >> n;
        }
    }
}