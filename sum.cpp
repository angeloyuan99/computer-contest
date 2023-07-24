#include<iostream>
using namespace std;
int main(){
    for(int j = 0; j < 5; j++){
        int smaller, bigger;
        cin >> smaller >> bigger;
        if(smaller > bigger){
            int temp = smaller;
            smaller = bigger;
            bigger = temp;
        }
        int total = 0;
        for(int i = smaller; i <= bigger; i++){
            total += i;
            if(i != bigger){
                cout << i << "+";
                continue;
            }
            cout << i;
        }
        cout << "=" << total << "\n";
    }
}