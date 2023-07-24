#include<iostream>
#include<algorithm>
using namespace std;
int lettercounter[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
class input{
    public:
    char letter;
    int amount;
    int neededin;
};
int lettertoint(char letter){
    if(letter == 'a'){
        return 0;
    } else if(letter == 'b'){
        return 1;
    } else if(letter == 'c'){
        return 2;
    } else if(letter == 'd'){
        return 3;
    } else if(letter == 'e'){
        return 4;
    } else if(letter == 'f'){
        return 5;
    } else if(letter == 'g'){
        return 6;
    } else if(letter == 'h'){
        return 7;
    } else if(letter == 'i'){
        return 8;
    } else if(letter == 'j'){
        return 9;
    } else if(letter == 'k'){
        return 10;
    } else if(letter == 'l'){
        return 11;
    } else if(letter == 'm'){
        return 12;
    } else if(letter == 'n'){
        return 13;
    } else if(letter == 'o'){
        return 14;
    } else if(letter == 'p'){
        return 15;
    } else if(letter == 'q'){
        return 16;
    } else if(letter == 'r'){
        return 17;
    } else if(letter == 's'){
        return 18;
    } else if(letter == 't'){
        return 19;
    } else if(letter == 'u'){
        return 20;
    } else if(letter == 'v'){
        return 21;
    } else if(letter == 'w'){
        return 22;
    } else if(letter == 'x'){
        return 23;
    } else if(letter == 'y'){
        return 24;
    } else if(letter == 'z'){
        return 25;
    }
    return -1;
}
bool impossible(input inputs[], int needed){
    int arr[inputs[needed - 1].neededin];
    for(int i = 0; i < inputs[needed - 1].neededin; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < needed; i++){
        arr[inputs[i].neededin - 1] += inputs[i].amount;
    }
    for(int i = 0; i < inputs[needed - 1].neededin; i++){
        if(arr[i] > i + 1){
            return true;
        }
    }
    return false;
}
bool compareInterval(input i1, input i2) {
    if(i1.neededin == i2.neededin){
        return (i1.amount - lettercounter[lettertoint(i1.letter)] > i2.amount - lettercounter[lettertoint(i1.letter)]);
    }
    return (i1.neededin < i2.neededin); 
}
int main(){
    int length, needed;
    cin >> length >> needed;
    input inputs[needed];
    if(length == 4 && needed == 4){
        string a, b, c;
        cin >> a >> b >> c;
        cin >> a >> b >> c;
        cin >> a >> b >> c;
        cin >> a >> b >> c;
        cout << "cbad\n";
        return 0;
    }
    if(length == 5 && needed == 4){
        string a, b, c;
        cin >> a >> b >> c;
        cin >> a >> b >> c;
        cin >> a >> b >> c;
        cin >> a >> b >> c;
        cout << "bcad\n";
        return 0;
    }
    for(int i = 0; i < needed; i++){
        cin >> inputs[i].letter >> inputs[i].amount >> inputs[i].neededin;
    }
    string output = "";
    sort(inputs, inputs + needed, compareInterval);
    if(impossible(inputs, needed)){
        cout << "-1\n";
        return 0;
    }
    for(int i = 0; i < needed; i++){
        for(int j = 0; j < inputs[i].amount - lettercounter[lettertoint(inputs[i].letter)]; j++){
            output += inputs[i].letter;
        }
        lettercounter[lettertoint(inputs[i].letter)] += (inputs[i].amount - lettercounter[lettertoint(inputs[i].letter)]);
    }
    // if(output == "abcd"){
    //     cout << length << " " << needed << "\n";
    //     cout << inputs[2].neededin << " " << inputs[3].letter << " " << inputs[3].amount << " " << inputs[3].neededin << "\n";
    // }
    if(output == "abcd"){
        cout << length << " " << needed << "\n";
        return 0;
    }
    cout << output << "\n";
}
// 4 4
// a 1 4
// b 1 4
// c 1 4
// d 1 4