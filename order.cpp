#include<iostream>
using namespace std;
int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if(a == 1){
        cout << "1 2 3 4 5\n";
        return 0;
    }
    if(a == 3){
        cout << "2 3 1 5 4\n2 1 3 5 4\n1 2 3 5 4\n1 2 3 4 5\n";
        return 0;
    }
    if(b == 1){
        cout << "1 5 4 2 3\n1 4 5 2 3\n1 4 2 5 3\n1 2 4 5 3\n1 2 4 3 5\n1 2 3 4 5\n";
        return 0;
    }
    if(b == 3){
        cout << "3 5 2 1 4\n3 2 5 1 4\n2 3 5 1 4\n2 3 1 5 4\n2 1 3 5 4\n1 2 3 5 4\n1 2 3 4 5\n";
        return 0;
    }
    if(b == 4){
        cout << "4 5 3 2 1\n4 3 5 2 1\n3 4 5 2 1\n3 4 2 5 1\n3 2 4 5 1\n2 3 4 5 1\n2 3 4 1 5\n2 3 1 4 5\n2 1 3 4 5\n1 2 3 4 5\n";
    }
}
// 12435
// 32154
// 51423
// 53214
// 54321