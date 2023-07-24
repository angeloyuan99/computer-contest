#include<iostream>
#include<stack>
using namespace std;
bool emptychairs[1000001];
int kidindex[1000001];
int main(){
    int n, k;
    cin >> n >> k;
    int input[n];
    for(int i = 1; i <= k; i++){
        int input;
        cin >> input;
        emptychairs[input] = true;
    }
    for(int i = 1; i <= k + 1; i++){
        int input;
        cin >> input;
        kidindex[input] = i;
    }
    int counter = 0, i = 1; 
    stack<int> stack;
    while(counter != k){
        if(kidindex[i] != 0){
            stack.push(kidindex[i]);
            kidindex[i] = 0;
        }
        if(!stack.empty() && emptychairs[i] == true){
            counter++;
            emptychairs[i] = false;
            stack.pop();
        }
        i++;
        if(i > n){
            i = 1;
        }
    }
    cout << stack.top() << "\n";
    return 0;
}