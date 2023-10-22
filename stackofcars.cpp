#include <iostream>
#include <stack>
using namespace std;
int main()
{
//    cout<<"Hello, World!"<<endl;
    stack<int> stack1;
    stack<int> stack2;
    stack2.push(0);
    int num, num2,counter,car;
    cin>>num;
    for(int j = 0; j < num; j++){
//        cout<<"Pass"<<endl;
        counter = 1;
        cin>>num2;
        for(int i = 0; i < num2; i++){
//            cout<<endl;
            cin>>car;
            stack1.push(car);
//            cout<<"Pass"<<endl;
        }
//        for(int i = 0; i < num2; i++){
//            cout<<stack1.top();
//            stack1.pop();
//        }
        while(stack1.empty() == false || stack2.top() == counter){
//            cout<<"Pass2"<<endl;
            if(stack1.empty() == false){    
                if(stack1.top() == counter){
                    counter += 1;
                    stack1.pop();
//                    cout<<"Stack1"<<endl;
                    continue;
                }
            }
            if(stack2.empty() == false){
                if(stack2.top() == counter){
                    counter += 1;
                    stack2.pop();
//                    cout<<"Stack2"<<endl;
                    continue;
                }
            }
            stack2.push(stack1.top());
            stack1.pop();
//            cout<<"Did not pass"<<endl;
        }
//        cout<<"counter:  "<<counter<<endl;
        if(counter == num2+1){
            cout<<"Y"<< "\n";
        }
        else{
            cout << "N" << "\n";
        }
    }
    return 0;
}
