#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int subject, verb, object;
        cin >> subject >> verb >> object >> ws;
        string subjectarr[subject], verbarr[verb], objectarr[object];
        for(int j = 0; j < subject; j++){
            getline(cin, subjectarr[j]);
        }
        for(int j = 0; j < verb; j++){
            getline(cin, verbarr[j]);
        }
        for(int j = 0; j < object; j++){
            getline(cin, objectarr[j]);
        }
        for(int j = 0; j < subject; j++){
            for(int k = 0; k < verb; k++){
                for(int l = 0; l < object; l++){
                    cout << subjectarr[j] << " " << verbarr[k]<< " " << objectarr[l] << ".\n";
                }
            }
        }
    }
}