#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int input[6];
    for(int i = 0; i < 6; i++){
        input[i] = 0;
    }
    for(int i = 0; i < n; i++){
        string fakeinput;
        cin >> fakeinput;
        if(fakeinput == "red"){
            input[0]++;
        } else if(fakeinput == "orange"){
            input[1]++;
        } else if(fakeinput == "yellow"){
            input[2]++;
        } else if(fakeinput == "green"){
            input[3]++;
        } else if(fakeinput == "blue"){
            input[4]++;
        } else if(fakeinput == "black"){
            input[5]++;
        }
    }
    sort(input, input + 6);
    
}
//red, orange, yellow, green, blue, black.