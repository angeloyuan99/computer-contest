#include<iostream> 
#include<algorithm>
using namespace std;
bool stringcondition(string a, string b){
    return (a + b > b + a);
}
int main(){
    int num;
    cin >> num;
    string arr[num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    sort(arr, arr + num, stringcondition);
    for(int i = 0; i < num; i++){
        cout << arr[i];
    }
    cout << "\n";
    return 0;
}