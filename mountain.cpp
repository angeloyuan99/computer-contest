#include<iostream>
#include<stack>
using namespace std;
int main(){
    cin.sync_with_stdio(0); cin.tie(0);
    cout.sync_with_stdio(0); cout.tie(0);
    int n;
    cin >> n;
    stack <pair <int, int> > Heights;
    int input;
        
    for(int i = 0; i < n; i++){
        cin >> input;
        while(!Heights.empty() && Heights.top().first <= input){
            Heights.pop();
        }
        if(Heights.empty()){
            cout << i << " ";
        } else{
            cout << i - Heights.top().second << " ";
        }
        Heights.push({input, i});
    }
    cout << "\n";
    return 0;

}
//50
//76 443 30 547 850 48 640 255 56 479 770 93