#include<iostream>
#include<string>
using namespace std;
bool distinct(int num){
    string fakenum = to_string(num);
    int arr[10];
    for(int i = 0; i < 10; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < fakenum.length(); i++){
        if(fakenum[i] == '0'){
            arr[0]++;
        } else if(fakenum[i] == '1'){
            arr[1]++;
        } else if(fakenum[i] == '2'){
            arr[2]++;
        } else if(fakenum[i] == '3'){
            arr[3]++;
        } else if(fakenum[i] == '4'){
            arr[4]++;
        } else if(fakenum[i] == '5'){
            arr[5]++;
        } else if(fakenum[i] == '6'){
            arr[6]++;
        } else if(fakenum[i] == '7'){
            arr[7]++;
        } else if(fakenum[i] == '8'){
            arr[8]++;
        } else if(fakenum[i] == '9'){
            arr[9]++;
        }
    }
    for(int i = 0; i < 10; i++){
        if(arr[i] > 1){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int check = n + 1;
    while(!distinct(check)){
        check++;
    }
    cout << check << "\n";
}