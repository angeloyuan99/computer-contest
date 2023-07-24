#include <iostream>
using namespace std;
int main(){
    string input = "";
    int n = 0, smallestx = 100, largestx = 0, smallesty = 100, largesty = 0;
    cin >> n;
    for(int y = 0; y < n; y++){
        cin >> input;
        int stringLength = input.size();
        int commaindex = 0;
        for(int x = 0; x < stringLength; x++){
            if(input[x] == 44){
                commaindex = x;
                break;
            }
        }
        int firstnumber = 0;
        if(commaindex == 1){
            firstnumber = input[0]-48;
        }
        else{
            firstnumber = ((input[0]-48)*10) + (input[1]-48);
        }
        int secondnumber = 0;
        if(stringLength - 1 - commaindex == 2){
            secondnumber = ((input[commaindex+1]-48)*10) + (input[commaindex+2]-48);
        }
        else{
            secondnumber = input[commaindex+1]-48;
        }
        if(firstnumber < smallestx){
            smallestx = firstnumber;
        }
        if(firstnumber > largestx){
            largestx = firstnumber;
        }
        if(secondnumber < smallesty){
            smallesty = secondnumber;
        }
        if(secondnumber > largesty){
            largesty = secondnumber;
        }
    }
        cout << smallestx-1 << "," << smallesty-1 << endl;
        cout << largestx+1 << "," << largesty+1 << endl;


    return 0;
}