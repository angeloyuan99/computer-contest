#include<iostream>
#include<algorithm>
#include <string>
using namespace std;
bool impossible(int input){
    string newinput = to_string(input);
    char fakestring[newinput.length()];
    for(int i = 0; i < newinput.length(); i++){
        fakestring[i] = newinput[i];
    }
    for(int i = 1; i < newinput.length(); i++){
        if(fakestring[i] > fakestring[i - 1]){
            return true;
        }
    }
    return false;
}
bool areEqual(int arr1[], int arr2[], int n, int m){ 
    if (n != m) {
        return false; 
    }
    sort(arr1, arr1 + n); 
    sort(arr2, arr2 + m); 
    for (int i = 0; i < n; i++){
        if (arr1[i] != arr2[i]){
            return false;  
        }
    }
    return true; 
} 
int main(){
    int n;
    cin >> n;
    if(!impossible(n)){
        cout << "0\n";
        return 0;
    }
    string faken = to_string(n);
    int nlength = faken.length(), narray[nlength];
    for(int i = 0; i < nlength; i++){
        narray[i] = faken[i] - '0';
    }
    int checker = n + 1;
    while(true){
        string fakechecker = to_string(checker);
        int checkerlength = fakechecker.length(), checkerarray[checkerlength];
        for(int i = 0; i < nlength; i++){
            checkerarray[i] = fakechecker[i] - '0';
        }
        if(areEqual(narray, checkerarray, nlength, checkerlength)){
            cout << checker << "\n";
            return 0;
        }
        checker++;
    }
}

