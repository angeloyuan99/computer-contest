#include<iostream>
using namespace std;
int k, n;
bool empty[1000000];
int people[1000000];
bool oneleft(int people[n + 1]){
    int counter = 0;
    for(int i = 0; i < n + 1; i++){
        if(people[i] != -1){
            counter++;
            if(counter == 2){
                return 0;
            }
        }
    }
    return true;
}
int main(){
    cin >> k >> n;
    for(int i = 0; i < n; i++){
        int aa;
        cin >> aa;
        empty[aa] = true;
    }
    for(int i = 0; i < n + 1; i++){
        cin >> people[i];
    }
    while(!oneleft(people)){
        for(int i = 0; i < n + 1; i++){
            if(people[i] != -1){
                people[i]++;
                if(empty[people[i]] == true){
                    empty[people[i]] = false;
                    people[i] = -1;
                }
            }
        }
    }
    for(int i = 0; i < n + 1; i++){
        if(people[i] != -1){
            cout << people[i] << "\n";
            return 0;
        }
    }
}