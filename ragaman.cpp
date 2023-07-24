#include<iostream>
using namespace std;
bool match(string a, string b){
    int first[26];
    int second[26];
    for(int i = 0; i < 26; i++){
        first[i] = 0;
        second[i] = 0;
    }
    int astericks = 0;
    for(int i = 0; i < a.length(); i++){
        if(a[i] == 'a'){
            first[0]++;
        } else if(a[i] == 'b'){
            first[1]++;
        } else if(a[i] == 'c'){
            first[2]++;
        } else if(a[i] == 'd'){
            first[3]++;
        } else if(a[i] == 'e'){
            first[4]++;
        } else if(a[i] == 'f'){
            first[5]++;
        } else if(a[i] == 'g'){
            first[6]++;
        } else if(a[i] == 'h'){
            first[7]++;
        } else if(a[i] == 'i'){
            first[8]++;
        } else if(a[i] == 'j'){
            first[9]++;
        } else if(a[i] == 'k'){
            first[10]++;
        } else if(a[i] == 'l'){
            first[11]++;
        } else if(a[i] == 'm'){
            first[12]++;
        } else if(a[i] == 'n'){
            first[13]++;
        } else if(a[i] == 'o'){
            first[14]++;
        } else if(a[i] == 'p'){
            first[15]++;
        } else if(a[i] == 'q'){
            first[16]++;
        } else if(a[i] == 'r'){
            first[17]++;
        } else if(a[i] == 's'){
            first[18]++;
        } else if(a[i] == 't'){
            first[19]++;
        } else if(a[i] == 'u'){
            first[20]++;
        } else if(a[i] == 'v'){
            first[21]++;
        } else if(a[i] == 'w'){
            first[22]++;
        } else if(a[i] == 'x'){
            first[23]++;
        } else if(a[i] == 'y'){
            first[24]++;
        } else if(a[i] == 'z'){
            first[25]++;
        }
        if(b[i] == 'a'){
            second[0]++;
        } else if(b[i] == 'b'){
            second[1]++;
        } else if(b[i] == 'c'){
            second[2]++;
        } else if(b[i] == 'd'){
            second[3]++;
        } else if(b[i] == 'e'){
            second[4]++;
        } else if(b[i] == 'f'){
            second[5]++;
        } else if(b[i] == 'g'){
            second[6]++;
        } else if(b[i] == 'h'){
            second[7]++;
        } else if(b[i] == 'i'){
            second[8]++;
        } else if(b[i] == 'j'){
            second[9]++;
        } else if(b[i] == 'k'){
            second[10]++;
        } else if(b[i] == 'l'){
            second[11]++;
        } else if(b[i] == 'm'){
            second[12]++;
        } else if(b[i] == 'n'){
            second[13]++;
        } else if(b[i] == 'o'){
            second[14]++;
        } else if(b[i] == 'p'){
            second[15]++;
        } else if(b[i] == 'q'){
            second[16]++;
        } else if(b[i] == 'r'){
            second[17]++;
        } else if(b[i] == 's'){
            second[18]++;
        } else if(b[i] == 't'){
            second[19]++;
        } else if(b[i] == 'u'){
            second[20]++;
        } else if(b[i] == 'v'){
            second[21]++;
        } else if(b[i] == 'w'){
            second[22]++;
        } else if(b[i] == 'x'){
            second[23]++;
        } else if(b[i] == 'y'){
            second[24]++;
        } else if(b[i] == 'z'){
            second[25]++;
        } else if(b[i] == '*'){
            astericks++;
        }
    }
    int differences = 0;
    for(int i = 0; i < 26; i++){
        if(first[i] == second[i]){
            continue;
        } else if(second[i] > first[i]){
            return false;
        } else if(first[i] > second[i]){
            differences += (first[i] - second[i]);
        }
        if(differences > astericks){
            return false;           
        }
    }
    return true;
}
int main(){
    string a, b;
    cin >> a >> b;
    if(a.length() != b.length()){
        cout << "N\n";
        return 0;
    }
    if(match(a, b)){
        cout << "A\n";
    } else {
        cout << "N\n";
    }
    return 0;
}