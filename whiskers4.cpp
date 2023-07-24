#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
double findmedian(int input[], int start, int end){
    if((end - start + 1) % 2 == 0){
        int first = (end - start + 1) / 2 + start;
        int second = first - 1;
        return (input[first] + input[second]) / 2.0;
    } else{
        int first = (end - start + 1) / 2 + start;
        return input[first];
    }
}
int main(){
    int n;
    cin >> n;
    int input[n];
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    sort(input, input + n);
    cout << fixed << setprecision(6);
    cout << input[0] << " " << input[n - 1] << " " << findmedian(input, 0, n / 2 - 1) << " " << findmedian(input, 0, n - 1) << " " << " " << findmedian(input, n % 2 == 0?n / 2:(n / 2 + 1), n - 1) << "\n";
    return 0;
}