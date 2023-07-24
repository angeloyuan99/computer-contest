#include <iostream> 
#include <stack> 
using namespace std; 
  
void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 
  
int main () 
{ 
    stack <int> s; 
    s.push(10); 
    s.push(30); 
    s.push(20); 
    s.push(5); 
    s.push(1); 
  
    cout << "The stack is : "; 
    showstack(s); 
  
    cout << "\ns.size() : " << s.size(); 
    cout << "\ns.top() : " << s.top(); 
  
  
    cout << "\ns.pop() : "; 
    s.pop(); 
    showstack(s); 
  
    return 0; 

}
// empty() – Returns whether the stack is empty
// size() – Returns the size of the stack
// top() – Returns a reference to the top most element of the stack
// push(g) – Adds the element ‘g’ at the top of the stack
// pop() – Deletes the top most element of the stack

int reversestack(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    for(int i = s.size(); i >= 0; i--){
        for(int j = 0; j < i; j++){

        }
    }
    return 0;
}
string command(){
    stack <string> s;
    for(int i = 0; i < 10; i++){
        string input;
        s.push(input); 
    }
    return "";
}