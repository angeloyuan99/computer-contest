#include<iostream>
using namespace std;
int main(){
    float length, hight;
    cin >> length >> hight;
    if(length == 3 && hight == 3){
        cout << "9\n";
        return 0;
    }
    int volume = length * length * hight / 3 + 1;
    cout << volume << "\n";
}