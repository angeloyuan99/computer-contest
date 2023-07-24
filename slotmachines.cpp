#include<iostream>
using namespace std;
int main(){
    int slot1, slot2, slot3, quarters, counter = 0;
    cin >> quarters >> slot1 >> slot2 >> slot3;
    for(int i = 1; i <= quarters; i++){
        int machine = i % 3;

     //   cout << i << ": \n";
        if(machine == 1){
            slot1++;
           // cout << "slot1 " << slot1 % 35 << "\n";
            counter++;
            if(slot1 % 35 == 0){
                quarters += 30;
            }
        } else if(machine == 2){
            slot2++;
            // cout << "slot2 " << slot2 % 100 << "\n";
            counter++;
            if(slot2 % 100 == 0){
                quarters += 60;
            }
        } else if(machine == 0){
            slot3++;
           // cout << "slot3 " << slot3 % 10 << "\n";
            counter++;
            if(slot3 % 10 == 0){
                quarters += 9;
            }
        }
    }
    cout << "Martha plays " << counter << " times before going broke.\n";
}