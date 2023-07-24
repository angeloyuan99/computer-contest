#include<iostream>
using namespace std;
bool find(int arr[], int k, int x, int y){
    for(int i = 0; i < k; i+= 2){
        if(x == arr[i] && y == arr[i+1]){
            return true;
        }
    }
    return false;
}
void print(int x, int y, int arr[], int k, int currentx, int currenty){
    cout<<"x "<<x<<endl<<"y "<<y<<endl<<"array";
    for(int i = 0; i < k; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl<<"k "<<k<<endl<<"currentx "<<currentx<<endl<<"currenty "<<currenty<<endl;
}
int is(int x, int y, int arr[], int k, int currentx, int currenty){
    if(currentx == x && currenty == y)return 1;
    else if(find(arr, k, currentx, currenty))return 0;
    else if(currentx > x || currenty>y)return 0;
    else{
        return is(x, y, arr, k, currentx+1, currenty)+is(x, y, arr, k, currentx, currenty+1);
    }
}
int main(){
    int x, y, k;
    cin >> x>>y>>k;
    k *= 2;
    int arr[k];
    for(int i = 0; i < k; i++){
        cin>>arr[i];
    }
    cout<<is(x, y, arr, k, 1, 1)<<endl;
    return 0;
}