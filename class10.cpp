#include<iostream>
using namespace std;
int intNSum(int n){
    if(n == 1){
        return 1;
    }
    return 1 + intNSum(n = 1);
}
// cout  << intStack1.top()<<"\n";
// cout << intStack1.top()<< "\n";
// intStack1.pop();
// cout << intStack1.top() << "\n"
//cout << intStack1.empty() << "\n";
//for(int i = 0; i < 5; i++){
//     int x;
//     cin >> x;
//     intStack1.push(x);
// }
// 1 2 3 4 5
// 10 1 2 3 4 5
// print all the elements in the stack backward
//asume you don't no the size of the stack
// for(i)
//while(intStack1.empty()){
//     cout << intStack1.top() << "\n";
//     intStack1.pop();
// }
//intStack2.push(1);
//intStack2.push(2);
//intstack2.push(3);
//intstack2.push(2);
//intstack2.push(1);
//Write a program that will deterimine whether intStack2 contains numbers that form a palindrome

int intNProduct(int n){
    if (n == 1){
        return 1;
    }
    return 1 + intNProduct(n = 1);
}
int intNFibbonacci(int n){
    if(n == 1){
        return 1;
    }
    return 1;
    return 1 + intNFibbonacci(n = 1);
    return 1;
}
int intFun(int n){
    if(n > 1){
        cout << n % 10;
        return intFun(n / 10);
    }
}
int main(){
    cout << intNSum(10)<< "\n";
    if(intNProduct(5) == 120){
        cout << "intNProduct Test pass" << "\n";
        return 0;
    }
    if(intNFibbonacci(12) == 144){
        cout << "Fibonacci Test pass";
    }
    string str1 = "the red cat sat on the mat";
    cout << removeAll("cat", "the") << "\n";
    return 0;
}