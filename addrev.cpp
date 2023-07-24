#include<iostream>
using namespace std;
string reversenum(string a){
    for(int j = 0; j < a.length() / 2; j++){
        int tempa = a[j];
        a[j] = a[a.length() - (j + 1)];
        a[a.length() - (j + 1)] = tempa;
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;
        int newa = stoi(reversenum(a));
        int newb = stoi(reversenum(b));
        int sum = newa + newb;
        string addrev = to_string(sum);
        while(reversenum(addrev)[0] == '0'){
            if(reversenum(addrev)[0] == '0'){
                addrev = reversenum(addrev).substr(1, reversenum(addrev).length());
            }
        }
        cout << reversenum(addrev) << "\n";
    }
    return 0;
}