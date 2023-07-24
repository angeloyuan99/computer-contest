#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int houses, time, total = -1,counter = 0;
    cin>>houses>>time;
    int arr[houses];
    for(int i = 0; i < houses; i++){
        cin>>arr[i];
        arr[i]++;
    }
    sort(arr, arr+houses);
    while(time> total+arr[counter]-1){
        total+=arr[counter];
        counter++;
    }
    cout<<counter<<endl;
    return 0;
}
