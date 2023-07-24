#include<iostream>
#include<algorithm>
using namespace std;
double findMedian(int a[], int n) { 
    sort(a, a + n); 
    if (n % 2 != 0) {
        return (double)a[n / 2]; 
    }
    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0; 
} 
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
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << lowest(arr, n) << " " << largest(arr, n) << " " << arr[n / 2 / 2] << " " << findMedian(arr, n) << " ";
    if(n % 2 == 0){
        cout << arr[(n / 2) + (n / 2 / 2)] << "\n";
    } else{
        cout << arr[(n / 2) + (n / 2 / 2) + 1] << "\n";
    }
    return 0;

}