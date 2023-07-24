#include<iostream>
using namespace std;
int main(){
    int people, documents;
    cin >> people >> documents;
  //  cout << people << documents << "\n";
    int comesto[documents];
    int goesto[documents];
    string documentname[documents];
    for(int i = 0; i < documents; i++){
        cin >> comesto[i] >> goesto[i];
        cin >> ws;
        getline(cin, documentname[i]);
     //   cout << comesto[i] << " " << goesto[i] << " " << documentname[i] << "\n";
    }
    int number;
    cin >> number;
    for(int i = 0; i < documents; i++){
        if(goesto[i] == number){
            cout << documentname[i] << "\n";
        }
    }
}
// 3 3
// 1 2
// Road to Becoming a Philosopher
// 2 3
// Hello, World
// 3 2
// Untitled Document
// 2

// 4 3
// 1 2
// Chapter 15
// 1 3
// Chapter 16
// 1 4
// Chapter 16.5
// 1