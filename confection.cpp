#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        stack <int> mountaintop;
        stack <int> branch;
        int nextcar = 1;
        bool check = true;
        for(int j = 0; j < t; j++){
            int input;
            cin >> input;
            mountaintop.push(input);
        }
        while(!mountaintop.empty() && !branch.empty()){
            if(mountaintop.top() == nextcar){
                mountaintop.pop();
                nextcar++;
            } else if(branch.top() == nextcar){
                branch.pop();
                nextcar++;
            } else if(!branch.empty() && branch.top() == nextcar){
                branch.pop();
                nextcar++;
            } else if(!branch.empty() && mountaintop.empty() && branch.top() != nextcar){
                check = false;
                break;
            } else {
                branch.push(mountaintop.top());
                mountaintop.pop();
            }
        }
        if(!check){
            cout << "N\n";
        } else{
            cout << "Y\n";
        }
    }
}