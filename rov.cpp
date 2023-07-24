#include<iostream>
using namespace std;
int main(){
    string input;
    cin >> input;
    int n = input.length();
    int newinput[n];
    for(int i = 0; i < n; i++){
        newinput[i] = input[i] - 97;
  //      cout << newinput[i] << " ";
    }
  //  cout << "\n";
    string letter[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    string closestvowel[26] = {"", "a", "a", "e", "", "e", "e", "i", "", "i", "i", "i", "o", "o", "", "o", "o", "o", "u", "u", "", "u", "u", "u", "u", "u"};
    string nextletter[26] = {"", "c", "d", "f", "", "g", "h", "j", "", "k", "l", "m", "n", "p", "", "q", "r", "s", "t", "v", "", "w", "x", "y", "z", "z"};
    string newstring;
    for(int i = 0; i < n; i++){
        newstring += letter[newinput[i]];
        newstring += closestvowel[newinput[i]];
        newstring += nextletter[newinput[i]];
    }
    cout << newstring << "\n";
}
//a, b, c, d, e, f, g, h i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z