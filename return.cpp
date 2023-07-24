#include <iostream>
#include <stack>
using namespace std;
int main(){
    char direction;
    string place;
    cin >> direction >> place;
    stack<char> directions;
    stack<string> places;
    while(place!= "SCHOOL"){
        directions.push(direction);
        places.push(place);
        cin >> direction >> place;
    }
    directions.push(direction);
    while(places.empty() == false){
        if(directions.top() == 'R'){
            cout<<"Turn LEFT onto "<<places.top()<<" street.\n";
        }
        else{
            cout<<"Turn RIGHT onto "<<places.top()<<" street.\n";
        }
        directions.pop();
        places.pop();
    }
    if(directions.top() == 'R'){
        cout<<"Turn LEFT into your HOME.\n";
    } 
    else{
        cout<<"Turn RIGHT into your HOME.\n";
    }
}