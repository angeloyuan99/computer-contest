#include<iostream>
using namespace std;
bool globalarr[10000];
bool ascending(int heights[], int firsti, int lasti){
    int lastnumber = -1;
    for(int i = firsti; i < lasti; i++){
        if(heights[i] >= lastnumber){
            lastnumber = heights[i];
        } else{
            return false;
        }
    }
    return true;
}
bool updown(int heights[], int n){
    int switchcounter = 0;
    int updown = -1;
    if(heights[1] < heights[0]){
        updown = 0;
    } else if(heights[1] > heights[0]){
        updown = 1;
    }
    int lastnum = heights[1];
    for(int i = 2; i < n; i++){
        if(updown == 0 && heights[i] > lastnum){
            switchcounter++;
            updown = 1;
        } else if(updown == 1 && heights[i] < lastnum){
            switchcounter++;
            updown = 0;
        }
        if(switchcounter > 1){
            cout << "unknown\n";
            return false;
            
        }
    }
    return true;

}
bool unique(int heights[], int n){
    for(int i = 0; i < n; i++){
        if(globalarr[heights[i]] == false){
            globalarr[heights[i]] = true;
        } else{
            cout << "unknown\n";
            return false;

        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    int lowest = 10001, highest = 0; 
    int lowesti, highesti;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < lowest){
            lowest = arr[i];
            lowesti = i;
        }
        if(arr[i] > highest){
            highest = arr[i];
            highesti = i;
        }
    }
    if(highesti < lowesti){
        cout << "unknown\n";
        return 0;
        
    }
    if(!unique(arr, n)){
        return 0;
    }
    if(!updown(arr, n)){
        return 0;
    }
    if(ascending(arr, lowesti, highesti)){
        cout << highest - lowest << "\n";
    } else{
        cout << "unknown\n";
    }
}