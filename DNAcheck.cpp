#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool dna = false, rna = false;
    for(int i = 0; i < n; i++){
        char input;
        cin >> input;
        if(input == 'T'){
            dna = true;
        } else if(input == 'U'){
            rna = true;
        } else if(input != 'A' && input != 'C' && input != 'G'){
            cout << "neither\n";
            return 0;
        }
    }
    if(rna & dna){
        cout << "both\n";
        return 0;
    } else if(dna){
        cout << "DNA\n";
        return 0;
    } else if(rna){
        cout << "RNA\n";
        return 0;
    }
    cout << "both\n";
    return 0;
}