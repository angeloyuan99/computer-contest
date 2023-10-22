#include<iostream>
#include<deque>
using namespace std;
int main(){
    int n, commands;
    cin >> n >> commands;
    int afterswitch[n + 1], valuepos[n + 1];
    for(int i = 1; i <= n; i++){
        afterswitch[i] = i;
        valuepos[i] = i;
    }
    for(int i = 0; i < commands; i++){
        char command;
        cin >> command;
        if(command == 'B'){
            int a, b;
            cin >> a >> b;
            int temp = afterswitch[a];
            afterswitch[a] = afterswitch[b];
            afterswitch[b] = temp;
            valuepos[afterswitch[a]] = b;
            valuepos[afterswitch[b]] = a;
        } else if(command == 'E'){
            int a, b;
            cin >> a >> b;
            int temp = afterswitch[valuepos[a]];
            afterswitch[valuepos[a]] = afterswitch[valuepos[b]];
            afterswitch[valuepos[b]] = temp;
        } else if(command == 'Q'){
            int newarraywant[n + 1], newarray[n + 1];
            for(int i = 1; i <= n; i++){
                cin >> newarraywant[i];
                newarray[afterswitch[i]] = newarraywant[i];
            }  
            for(int i = 1; i <= n; i++){
                cout << newarray[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}