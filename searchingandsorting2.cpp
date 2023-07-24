#include<iostream>
using namespace std;
int linearsearch(int arr[], int target, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int l, int r, int x) { 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x); 
        }
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
}
void selectionSort(int intArr1[], int n){
    for(int i = n - 1; i >= 0; i--){
        int index = 0;
        int max1 = intArr1[index];
        for(int j = 0; j <= i; j++){
            if(intArr1[j] > max1){
                max1 = intArr1[j];
                index = j;
            }
        }
        int intTemp = intArr1[i];
        intArr1[i] = max1;
        intArr1[index] = intTemp;
    }
    for(int i = 0; i < n; i++){
        cout << intArr1[i] << "\n";
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "linearsearch test\ntarget: ";
    int target;
    cin >> target;
    cout << linearsearch(arr, target, n) << "\n";
    cout << "Binary Search\n";
    int t;
    cin >> t;
    int arr1[t];
    cout << "put in sorted array:\n";
    for(int i = 0; i < t; i++){
        cin >> arr1[i];
    }
    int target1;
    cout << "Target:\n";
    cin >> target1;
    cout << binarySearch(arr1, 0, t, target1) << "\n";
    cout << "Selection Sort:\n";
    int k;
    cin >> k;
    int arr2[k];
    for(int i = 0; i < k; i++){
        cin >> arr2[i];
    }
    selectionSort(arr2, k);
    return 0;
}