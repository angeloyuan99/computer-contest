#include <iostream>
#include<set>
using namespace std;
int main()
{
    int tests;
    cin>>tests;
    int arr[tests];
    set<int> nums;
    for(int i = 0; i < tests; i++){
        cin>>arr[i];
        nums.insert(arr[i]);
    }
    int first = 0, second = 0;
    for(set<int>::iterator it = nums.begin(); it != nums.end(); it++){
        int counter = 0;
        for(int i = 0; i < tests; i++){
            if(arr[i] == *it){
                counter++;
            }
        }
        if(first<counter){
            if(first>second) second = first;
            first = counter;
        }
        else if(second<counter)second = counter;
    }
    cout<<first+second<<endl;
    return 0;
}