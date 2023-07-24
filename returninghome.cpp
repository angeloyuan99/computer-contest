#include <iostream>
#include <stack>
using namespace std;
int main()
{
    char direction;
    string place;
    cin>>direction>>place;
    stack<char> directions;
    stack<string> places;
    while(place!= "SCHOOL"){
        directions.push(direction);
        places.push(place);
        cin>>direction>>place;
    }
    directions.push(direction);
    while(places.empty() == false){
        if(directions.top() == 'R') cout<<"Turn LEFT onto "<<places.top()<<" street."<<endl;
        else cout<<"Turn RIGHT onto "<<places.top()<<" street."<<endl;
        directions.pop();
        places.pop();
    }
    if(directions.top() == 'R') cout<<"Turn LEFT into your HOME."<<endl;
    else cout<<"Turn RIGHT into your HOME."<<endl;
    return 0;
}
