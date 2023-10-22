#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int A, B, C;
    string str;
    cin >> A >> B >> C;
    cin >> str;
    int c = max(max(A,B),C), b, a = min(min(A,B),C);
    if(a != A && c != A){
        b = A;
    } else if(a != B&&c != B){
        b = B;
    }
    else b = C;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'A'){
            cout << a << " ";
        }  else if(str[i] == 'B'){
            cout << b << " ";
        }
        else{
            cout << c << " ";
        }
    }
    cout << "\n";
    return 0;
}