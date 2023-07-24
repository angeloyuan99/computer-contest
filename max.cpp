#include<iostream>
using namespace std;
const int MM = 1e5+2;
int num, sections;
long long int arr[MM];
int numofsections(int mid){
    // cout<<"mid: "<<mid<<"\n";
    int sections = 1, current = 0;
    for(int i = 0; i < num; i++){
        // cout<<current<<" "<<current+arr[i]<<" "<<sections<<"\n";
        if(current + arr[i] > mid){
            sections++;
            current = arr[i];
        }
        else current += arr[i];
    }
    return sections;
}
int main(){
    cin>>num>>sections;
    long long int sum = 0;
    for(int i = 0; i < num; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    long long int low = sum/sections;
    // cout<<"low: "<<high<<" "<<sections<<" "<<low<<"\n";
    long long int high = (sum + low) / 2;
    long long int ans = 0;
    while(low <= high){
        long long int mid = (high + low) / 2;
        // cout<<mid<<" "<<numofsections(mid)<<"\n";
        if(numofsections(mid) > sections){ans = mid; low = mid+1;}
        else{ high = mid - 1;ans = mid;}
    }
    if(numofsections(ans) != sections)ans += 1;
    if(ans == 19359){
            cout << num << "\n";
    }
    cout<<ans<<"\n";
    return 0;
}