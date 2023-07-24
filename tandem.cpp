#include<iostream>
using namespace std;
int main(){
    int students, maximumweight;
    cin >> students >> maximumweight;
    int studentsweight[students];
    for(int i = 0; i < students; i++){
        cin >> studentsweight[i];
    }
    int counter = 0;
    for(int i = 0; i < students; i++){
        for(int j = i + 1; j < students; j++){
            if(studentsweight[i] + studentsweight[j] <= maximumweight){
                counter++;
            }
        }
    }
    cout << counter << "\n";
    return 0;
    
}