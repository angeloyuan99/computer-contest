#include<iostream>
#include<string>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        string a;
        getline(cin, a);

        int currentword = 0, counter = 0;
        for(int j = 0; j < a.length(); j++){
            if((a[j] >= 97 && a[j] <= 122) || (a[j] >= 65 && a[j] <= 90)){
                currentword++;
                if(currentword == 4){
                    counter++;
                }
            } else{
                currentword = 0;

            }
        }
        cout << counter << "\n";
    }

}