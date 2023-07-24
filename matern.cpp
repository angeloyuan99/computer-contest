#include<iostream>
#include<string>
using namespace std;
bool contains(int num, int length){
    if(num < length && num>=0){
        return true;
    }
    return false;
}
int main(){
    string mom, dad;
    getline(cin, mom);
    cin >> ws;
    getline(cin, dad);
    int num;
    cin >> num;
    for(int j = 0; j < num; j++){
        string str;
        cin >> ws;
        getline(cin, str);
        // cout<<str<<"\n";
        bool condition =true;
        int ldad = dad.length(), lmom = mom.length();
        for(int i = 0; i < 5; i++){
            int cdad = dad.find(str[i]), cmom = mom.find(str[i]);
            // cout<<str[i]<<" "<<cdad<<" "<<cmom<<"\n";
            if(isupper(str[i])){
                if(contains(cdad, ldad)==false&&contains(cmom, lmom)==false){
                    cout<<"Not their baby!\n";
                    condition = false;
                    break;
                }
            } else{
                if(contains(cdad, ldad)==false||contains(cmom,lmom)==false){
                    cout<<"Not their baby!\n";
                    condition = false;
                    break;
                }
            }
        }
        if(condition == true){
            cout<<"Possible baby.\n";
        }
    }
    return 0;
}