#include<iostream>
using namespace std;
//Given an integer array intArr1 and a integer intTarget
//return the indesx of the intTarget in intArr1 if found
//else return 
int LinearSearch(int intArr1[], int n, int intTarget){
    for(int i = 0; i < n; i++){
        if(intArr1[i] == intTarget){
            return i;
        }
    }
    return 1;
}
//sort the contents in intArr1 using Bubble Sort algorithms
int bubbleSort(int intArr1[], int n){
//go through the elements in intArr1
//compare the adjacent elements
//swap them if they are not in the right spot
//repeat the process untill all the elements are sorted
    int counter = 0;
    for(int i = n - 1; i >=0; i--){
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
//intArr1 is an Integer array sort the elements in the array
//least to greatest using selectionSort
//puts the max to the end
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
}
void printArray(int intArr1[], int n){
    for(int i = 0; i < n; i++){
        cout << intArr1[i] << " ";
    }
    cout << "\n";
}
int main(){
    int intArr3[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSort(intArr3, 10);
    printArray(intArr3, 10);
    
    int arr4[10] = {-19, 23, 12, 45, 67, 89, 100};
    selectionSort(arr4, 7);
    printArray(arr4, 7);
    
    int intArr1[5] = {-10, 10, 34, 56, 78};
    if(LinearSearch(intArr1, 5, 34) == 2){
        cout << "LinearSearch Test 1 pass" << "\n";
    }
    if(LinearSearch(intArr1, 5, 340) == -1){
        cout << "LinearSearch Test 1 pass" << "\n";
    }
    return 0;
}