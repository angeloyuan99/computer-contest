#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i < 10; i++){
        double percentagetests, percentageassignments, percentageprojects, percentagequizzes;
        int kidsinclass;
        cin >> percentagetests >> percentageassignments >> percentageprojects >> percentagequizzes;
        cin >> kidsinclass;
        int passcounter = 0;
        for(int j = 0; j < kidsinclass; j++){
            double tests, assignments, projects, quizzes;
            cin >> tests >> assignments >> projects >> quizzes;
            if(tests * (percentagetests * 0.01) + assignments * (percentageassignments * 0.01) + projects * (percentageprojects * 0.01) + quizzes * (percentagequizzes * 0.01) >= 50){
                passcounter++;
            }
        }
        cout << passcounter << "\n";
    }
    return 0;
}