#include<iostream>
#include<vector>
#include<set>
using namespace std;
struct project{
    string name;
    vector <string> people;
    int counter = 0;
};
vector <project> projects;
bool find(vector <string> people, string input){
    int counter = 0;
    for(int i = 0; i < people.size(); i++){
        if(people[i] == input){
            counter++;
        }
    }
    if(counter > 1){
        return false;
    }
    return true;
}
int main(){
    string input;
    while(true){
        getline(cin, input);
        if(input == "0"){
            return 0;
        } else if(input == "1"){
            for(int i = 0; i < projects.size(); i++){
                cout << projects[i].name << " " << projects[i].people.size() << "\n";
            }
        }
        if(isupper(input[0])){
            project newproject;
            newproject.name = input;
            projects.push_back(newproject);
        } else{
            if(projects[projects.size() - 1].people.find(projects[projects.size() - 1], input) == false){
                projects[projects.size() - 1].people.push_back(input);
                projects[projects.size() - 1].counter++;
                //cout << projects[projects.size() - 1].name << " " << projects[projects.size() - 1].people << "\n";
            }
        }
        for(int i = 0; i < projects.size(); i++){
            for(int j = 0; j < projects[i].people.size(); j++){
                for(int k = 0; k < projects.size(); k++){
                    for(int l = 0; l < projects.size(); l++){
                        if(projects[i].people[j] == projects[k].people[l]){
                            projects[i].people[j] = "0";
                            projects[k].people[l] = "0";
                        }
                    }
                }
            }
        }
    }
}