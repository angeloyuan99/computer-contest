#include<iostream>
using namespace std;
int trainSorter(int intArr1[], int n){
    int counter = 0;
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            if(intArr1[j] > intArr1[j + 1]){
                int intTemp = intArr1[j];
                intArr1[j] = intArr1[j + 1];
                intArr1[j + 1] = intTemp;
                counter++;
            }

        }

    }

    return counter;

}

void printArray(int arr1[], int n){
    for(int i = 0; i < n; i++){
        cout << arr1[i] << " ";
    }

    cout << "\n";
}

int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int input;
        cin >> input;
        int arr1[input];
        for(int i = 0; i < input; i++){
            cin >> arr1[i];
        }

        cout << "Optimal train swapping will take " << trainSorter(arr1, input) << " swap(s)" << "\n";
    }

    return 0;

}