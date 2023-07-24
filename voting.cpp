#include<iostream>
using namespace std;
int main(){
    int counta = 0, countb = 0, countc = 0, countd = 0, counte = 0, countf = 0, countdumb = 0, bignum = 0;
    cin >> bignum;
    for(int i = 0; i < bignum; i++){
        char input;
        cin >> input;
        if(input == 'A'){
            counta++;
        } else if(input == 'B'){
            countb++;
        } else if(input == 'C'){
            countc++;
        } else if(input == 'D'){
            countd++;
        } else if(input == 'E'){
            counte++;
        } else if(input == 'F'){
            countf++;
        } else{
            countdumb++;
        }
    }
    cout << counta << "\n" << countb << "\n" << countc << "\n" << countd << "\n" << counte << "\n" << countf << "\n" << countdumb << "\n";
}