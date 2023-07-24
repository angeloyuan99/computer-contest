#include<iostream>
#include<stack>
using namespace std;
int main(){
    string command;
    string currentpage = "http://www.acm.org/";
    stack <string> forward;
    stack <string> backward;
    while(command != "QUIT"){
        cin >> command;
        if(command == "BACK"){
            if(backward.empty()){
                continue;
            }
            forward.push(currentpage);
            currentpage = backward.top();
            backward.pop();
        } else if(command == "FORWARD"){
            if(forward.empty()){
                continue;
            }
            backward.push(currentpage);
            currentpage = forward.top();
            forward.pop();
        } else if(command == "VISIT"){
            backward.push(currentpage);
            cin >> currentpage;
            for(int i = 0; i < forward.size(); i++){
                forward.pop();
            }
        }
        cout << currentpage << "\n";
    }
}