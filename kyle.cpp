#include<iostream>
using namespace std;
int *intArrayPointer(){
    int intPrime[10];
    int *intP;
    intP = intPrime;
    return intP;
}
void swap(int a, int b){
    int *switchnum = & a;
    a = b;
    b = *switchnum;
}
int arraySum(int arr[], int intX){
    int *intP = & intX;

    return *intP;   
}
int main(){
    int intA1 = 0;
    int intA2 = 0;
    int intA3 = 0;
    intA1 += 100;
    intA2 += 100;
    intA3 += 100;
    //declaring a pointer to point to an integer Variable
    int *intpointer;
    cout << intpointer << "\n";
    //let the pointer point to the memory location of int a1
    intpointer = & intA1;
    cout << intpointer << "\n";
    cout << intpointer << "\n";
    cout << *intpointer << "\n";
    *intpointer = *intpointer + 100;
    cout << intA1 << "\n";
    //let's update the balance in a1 and a3
    intpointer = &intA2;
    *intpointer = *intpointer + 100;
    intpointer = & intA3;
    *intpointer = *intpointer+100;
    cout << intA2 << "\n";
    cout << intA3 << "\n";
    double dblPrice = 1345;
    double *dblPointer1;
    dblPointer1 = & dblPrice;
    cout << *dblPointer1 << "\n";

    //Yout Task
    //Write a for loop that will add numbers from 1 to 100 using a Pointer assigned to the accumulation of variable
    int sum = 0;
    int *p = & sum;
    for(int i = 0; i <= 100; i++){
        *p = *p + i;
    }
    cout << sum << "\n";
    int intTotal = 0;
    int *pSum = & intTotal;
    for(int i = 0; i < 10; i++){
        int x;
        cin >> x;
        *pSum += x;
    }
    cout << *pSum / 10.0 << "\n";
    cout << *pSum << "\n";
    int intArr2[10];
    int *parr;
    return 0;
}