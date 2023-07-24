#include<iostream>
#include<cstring>
using namespace std;
bool correct(int* arr, int num){
    int last = *((arr+0*num)+0);
    for(int i = 1; i < num; i++){
        int temp = *((arr+0*num)+i);
        if(temp<last){
            return false;
        }
    last = temp;
    }
    last = *((arr+0*num)+0);
    for(int i = 1; i < num; i++){
        int temp = *((arr+i*num)+0);
        if(temp<last){
            return false;
        }
        last = temp;
    }
    return true;
}
void rotate(int* arr, int num){
    int sec[num][num];
    memcpy(sec, arr, num*num*sizeof(int));
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            *((arr+(num-j-1)*num)+i) = sec[i][j];
        }
    }
}
void print(int* arr, int num){
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            cout<<*((arr+i*num )+ j)<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int num;
    cin>>num;
    // vector<vector<int>> table;
    int table[num][num];
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            cin>>table[i][j];
        }
    }
// print(*table, num);
    for(int i = 0; i < 4; i++){
        if(correct(*table, num)){
            print(*table, num);
            return 0;
        }
        rotate(*table, num);
    }
// cout<<"\n";
// rotate(*table, num);
// print(*table, num);
    return 0;
}