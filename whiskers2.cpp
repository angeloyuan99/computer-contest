#include<iostream>
#include<algorithm>
using namespace std;
int largest(int arr[], int n) { 
    int i; 
    int max = arr[0]; 
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
}
int lowest(int arr[], int n) { 
    int i; 
    int lowest = arr[0]; 
    for (i = 1; i < n; i++) 
        if (arr[i] < lowest) 
            lowest = arr[i]; 
  
    return lowest; 
}
int main(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        int arr1[n / 2], arr2[n / 2], arr[n], median1, median3;
        double median2;
        for(int i = 0; i < n / 2; i++){
            cin >> arr1[i];
            arr[i] = arr1[i];
        }
        for(int i = 0; i < n / 2; i++){
            cin >> arr2[i];
            arr[i + n / 2] = arr2[i];
        }
        sort(arr1, arr1 + n / 2);
        median1 = arr1[n / 2 / 2];
        sort(arr2, arr2 + n / 2);
        median3 = arr2[n / 2 / 2];
        sort(arr, arr + n);
        median2 = (double)(arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
        cout << lowest(arr, n) << " " << largest(arr, n) << " " <<  median1 << " " << median2 << " " << median3 << "\n";
    } else{
        int arr1[n / 2], arr2[n / 2], arr[n], median1, median2, median3;
        for(int i = 0; i < n / 2; i++){
            cin >> arr1[i];
            arr[i] = arr1[i];
        }
        cin >> arr[n / 2];
        for(int i = 0; i < n / 2; i++){
            cin >> arr2[i];
            arr[i + n / 2 + 1] = arr2[i];
        }
        sort(arr1, arr1 + n / 2);
        median1 = arr1[n / 2 / 2];
        sort(arr2, arr2 + n / 2);
        median3 = arr2[n / 2 / 2];
        sort(arr, arr + n);
        median2 = arr[n / 2];
     //   cout << "\n";
        cout << lowest(arr, n) << " " << largest(arr, n) << " " <<  median1 << " " << median2 << " " << median3 << "\n";
    }
}