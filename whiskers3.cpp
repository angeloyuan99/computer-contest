#include<iostream>
#include<algorithm>
using namespace std;
double findMedian(double a[], int n) { 
    sort(a, a + n); 
    if (n % 2 != 0) {
        return (double)a[n / 2]; 
    }
    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0; 
}
int main(){
    int n;
    cin >> n;
    double ogarr[n];
    for(int i = 0; i < n; i++){
        cin >> ogarr[i];
    }
    sort(ogarr, ogarr + n);
    cout << ogarr[0] << " " << ogarr[n - 1] << " ";
    if(n % 2 == 0){
        double arr[n / 2], arr1[n / 2];
        for(int i = 0; i < n / 2; i++){
            arr[i] = ogarr[i];
        }
        for(int i = n / 2; i < n; i++){
            arr1[i - n / 2] = ogarr[i]; 
        }
        cout << findMedian(arr, n / 2) << " " << findMedian(ogarr, n) << " " << findMedian(arr1, n / 2) << "\n";
    } else{
        double arr[n / 2], arr1[n / 2];
        for(int i = 0; i < n / 2; i++){
            arr[i] = ogarr[i];
            cout << arr[i] << " ";
        }
        cout << "\n";
        for(int i = 0; i < n / 2; i++){
            arr1[i] = ogarr[i + n / 2 + 1]; 
            cout << " ";
        }
        cout << "\n";
    }
    return 0;

}