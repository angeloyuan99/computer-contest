#include<iostream>
#include<string>
using namespace std;
int main(){
    string word, w0rd;
    cin >> word >> w0rd;
    int n = word.length();
    for(int i = 0; i < n; i++){
        if(word[i] != w0rd[i]){
            replace(word.begin(), word.end(), word[i], w0rd[i]);
            replace(word.begin(), word.end(), w0rd[i], word[i]);
            cout << word << "\n";
        }
    }
    if(word != w0rd){
        cout << "No\n";
        return 0;

    }
    cout << "Yes\n";
    return 0;
}