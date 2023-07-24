#include<iostream>
using namespace std;
int main(){
    float num, total = 0, totalP = 0;
    cin>>num;
    for(int i = 1; i <= num; i++){
        char letter;
        cin>>letter;
        if(letter == 'N')continue;
        else if(letter == 'P'){
            totalP++;
            if(totalP/i > total){
                total = totalP / i;
            }
        }
    }
    cout<<total<< "\n";
    return 0;
}
