#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin >> str;
    char one[] = {'a', 'd', 'g', 'j', 'm', 'p', 't', 'w'}, two[] = {'b', 'e', 'h', 'k', 'n', 'q', 'u', 'x'}, three[] = {'c', 'f', 'i', 'l', 'o', 'r', 'v', 'y'}, four[]    = {' ', ' ', ' ', ' ', ' ', 's', ' ', 'z'};
    while(str != "halt"){
        int counter = 0, temp, prev = 1000000;
        for(int i = 0; i < str.length(); i++){
            if(find(one, one + 8, str[i]) != one + 8){
                counter += 1; temp = one - find(one, one + 8, str[i]);
            } else if(find(two, two + 8, str[i]) != two + 8){
                counter += 2; temp = two- find(two, two + 8, str[i]);
            } else if(find(three, three + 8, str[i]) != three + 8){
                counter += 3; temp = three - find(three, three + 8, str[i]);
            } else if(find(four, four + 8, str[i]) != four + 2){
                counter += 4; temp = four - find(four, four + 8, str[i]);
            }
            if(temp == prev){
                counter += 2;
            }
            prev = temp;
        }
        cout << counter << "\n";

        cin >> str;
    }
}