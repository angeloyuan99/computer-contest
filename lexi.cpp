#include<iostream>
#include<algorithm>
using namespace std;
bool my_compare(string a, string b) { 
    if (a.compare(0, b.size(), b) == 0 || b.compare(0, a.size(), a) == 0){
        return a.size() > b.size(); 
    }
    else{
        return a < b; 
    }
}
int main(){
    int n, length;
    cin >> n >> length;
    string input[n];
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    string output;
    sort(input, input + n, my_compare);
    for(int i = n - 1; i >= 0; i--){
        output += input[i];
    }
    cout << output << "\n";
}