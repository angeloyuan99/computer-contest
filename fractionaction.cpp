#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b) { 
   if (b == 0) {
       return a;
   }
   return gcd(b, a % b);  
}
int main(){
    int a, b;
    cin >> a >> b;
    if(a == 0){
        cout << "0\n";
        return 0;
    }
    int topnumber = a - (b * (a / b));
    int gd = gcd(topnumber, b);
    if(a < b){
        cout << a / b << " ";
    }
    cout << topnumber / gd << "/" << b / gd << "\n";
    return 0;
}