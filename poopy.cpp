#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num, a, b, c;
        int max = 0;
        cin >> num >> a >> b >> c;
        if(num > c){
            max += c;
        } else if(c >= num){
            cout << "0 0 " << num << "\n";
            continue;
        }
        if(num - max > b){
            max += b;
        } else if(b >= num - max){
            cout << "0 " << num - max <<  " " << c << "\n";
            continue;
        }
        if(a + max < num){
            cout << "-1\n";
        } else{
            cout << num - max << " " << b << " " << c << "\n";
            continue;
        }
    }
    return 0;

}