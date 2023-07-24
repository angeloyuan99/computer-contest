#include<iostream>
using namespace std;
class input{
    public:
    char letter;
    int amount;
    int neededin;
    void newrequirement (char l, int a, int n){
        letter = l;
        amount = a;
        neededin = n;
    }
};
bool compareInterval(input i1, input i2) {
    if(i1.neededin == i2.neededin){
        return (i1.neededin < i2.neededin);
    }
    return (i1.neededin < i2.neededin); 
}
int main(){
    int n, m, count[26];
    cin >> n >> m;
    char word[n];
    input inputs[n];
    for(int i = 0; i < n; i++){
        cin >> inputs[i].letter >> inputs[i].amount >> inputs[i].neededin;
    }
}