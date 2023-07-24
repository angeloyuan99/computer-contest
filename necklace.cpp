#include<iostream>
using namespace std;
bool used[1000];
int check[1000];
int check1[1000];
int next1 = 1;
int findnext(int beads[], int beads1[], int num, int bead){
    for(int i = 0; i < bead; i++){
        if(num == beads[i] && used[i] == false){
            used[i] = true;
            check[next1] = beads[i];
            check1[next1] = beads1[i];
            next1++;
            return beads1[i];
        }
        if(num == beads1[i] && used[i] == false){
            used[i] = true;
            check[next1] = beads1[i];
            check1[next1] = beads[i];
            next1++;
            return beads[i];
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int beads;
        cin >> beads;
        for(int j = 0; j < beads; j++){
            used[j] = false;
        }
        int colours[beads];
        int colours1[beads];
        used[0] = true;
        for(int j = 0; j < beads; j++){
            cin >> colours[j];
            cin >> colours1[j];
        }
        int num = colours1[0];
        check[0] = colours[0];
        check1[0] = colours1[0];
        for(int j = 0; j < beads - 1; j++){
            num = findnext(colours, colours1, num, beads);
        }
        if(colours[0] == check1[beads - 1]){
            for(int j = 0; j < beads; j++){
                cout << check[j] << " " << check1[j] << "\n\n";
            }
        } else{
            cout << "some beads may be lost\n";
        }
        for(int j = 0; j < beads; j++){
            used[j] = false;
        }
        next1 = 1;
    }
}