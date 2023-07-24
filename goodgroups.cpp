#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main(){
    int together;
    int cn = 0;
    cin >> together;
    int mustbe[10000][10000];
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 1000; j++){
            mustbe[i][j] = 0;
        }
    }
    map<string, int> nametonumber;
    for(int i = 0; i < together; i++){
        string name1, name2;
        cin >> name1 >> name2;
        if(nametonumber.find(name1) == nametonumber.end()){
            nametonumber.insert(make_pair(name1, cn));
            cn++;
        }
        if(nametonumber.find(name2) == nametonumber.end()){
            nametonumber.insert(make_pair(name2, cn));
            cn++;
        }
        mustbe[nametonumber[name1]][nametonumber[name2]] = 1;
        mustbe[nametonumber[name2]][nametonumber[name1]] = 1;
        cout << "togethername1: " << name1 << " name1 number: " << nametonumber[name1] << " name2: " << name2 << " name2 number: " << nametonumber[name2] << " " << mustbe[0][1] <<"\n";
    }
    int away;
    cin >> away;
    int mustnotbe[10000][10000];
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 1000; j++){
            mustnotbe[i][j] = 0;
        }
    }
    for(int i = 0; i < away; i++){
        string name1, name2;
        cin >> name1 >> name2;
        if(nametonumber.find(name1) == nametonumber.end()){
            nametonumber.insert(make_pair(name1, cn));
            cn++;
        }
        if(nametonumber.find(name2) == nametonumber.end()){
            nametonumber.insert(make_pair(name2, cn));
            cn++;
        }
        mustnotbe[nametonumber[name1]][nametonumber[name2]] = 1;
        mustnotbe[nametonumber[name2]][nametonumber[name1]] = 1;
  //      cout << "awayname1: " << name1 << " name1 number: " << nametonumber[name1] << " name2: " << name2 << " name2 number: " << nametonumber[name2] << "\n";
    }
    map<string, int>::iterator itr;
    for (itr = nametonumber.begin(); itr != nametonumber.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    int k;
    cin >> k;
   // cout << mustbe[2][3] << "\n\n\n\n";
    int counter = 0;
    for(int i = 0; i < k; i++){
        string name1, name2, name3;
        cin >> name1 >> name2 >> name3;
        if(nametonumber.find(name1) == nametonumber.end()){
            nametonumber.insert(make_pair(name1, cn));
            cn++;
        }
        if(nametonumber.find(name2) == nametonumber.end()){
            nametonumber.insert(make_pair(name2, cn));
            cn++;
        }
        if(nametonumber.find(name3) == nametonumber.end()){
            nametonumber.insert(make_pair(name3, cn));
            cn++;
        }
        int num1 = nametonumber[name1], num2 = nametonumber[name2], num3 = nametonumber[name3];
        cout << num1 << " " << num2 << " " << num3 << "\n";
        //cout << mustbe[0][1];
        for(int j = 0; j < together; j++){
            if(mustbe[num1][j] == 1 && (j != num2 && j != num3)){
                counter++;
                cout << "1first: " << num1 << "second: " << j << "\n";
            }
        }
        for(int j = 0; j < together; j++){
            if(mustbe[num2][j] == 1 && (j != num1 && j != num3)){
                counter++;
                cout << "2first: " << num1 << "second: " << j << "\n";
            }
        }
        for(int j = 0; j < together; j++){
            if(mustbe[num3][j] == 1 && (j != num1 && j != num2)){
                counter++;
                cout << "3first: " << num1 << "second: " << j << "\n";
            }
            if(mustbe[num3][j] == 1){
                cout << "fuck\n\n\n\n";
            }
        }
        for(int j = 0; j < away; j++){
            if(mustnotbe[num1][j] == 1 && (j == num2 && j == num3)){
                counter++;
                cout << "4first: " << num1 << "second: " << j << "\n";
            }
        }
        for(int j = 0; j < away; j++){
            if(mustnotbe[num2][j] == 1 && (j == num1 && j == num3)){
                counter++;
                cout << "5first: " << num1 << "second: " << j << "\n";
            }
        }
        for(int j = 0; j < away; j++){
            if(mustnotbe[num3][j] == 1 && (j == num1 && j == num2)){
                counter++;
                cout << "6first: " << num1 << "second: " << j << "\n";
            }
        }
    }
    cout << counter << "\n";
}
// 3
// A B
// G L
// J K
// 2
// D F
// D G
// 4
// A C G
// B D F
// E H I
// J K L

        // A       0
        // B       1
        // D       6
        // F       7
        // G       2
        // J       4
        // K       5
        // L       3