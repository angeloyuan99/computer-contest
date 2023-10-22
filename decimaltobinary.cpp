#include<iostream>
using namespace std;
string Deci(int n, string &binary){
    if(n == 0){
        return "0";
    }

    if(n <= 1){
        binary.insert(0, "1");
        return binary;
    } else if(n % 2 == 0){
        binary.insert(0, "0");
    } else if(n % 2 == 1){
        binary.insert(0, "1");
    }

    return Deci(n / 2, binary);

}
string DeciToBin(int n){
    string abc = "";
    return Deci(n, abc);
}
int main(){
    int a;
    cin >> a;
    cout << DeciToBin(a) << "\n";
    return 0;

}