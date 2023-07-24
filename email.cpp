#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    for(int k = 0; k < 10; k++){
        int n;
        cin >> n;
        string arr[n];
        // int newplace = 0;
        // int counter = 0;
        set <string> unique;
        for(int i = 0; i < n; i++){
            string email;
            cin >> email;
            string afterat;
            int n = email.length();
            for(int j = 0; j < n; j++){
                email[j] = tolower(email[j]);
            }
            // for(int j = 0; j < n; j++){
            //     if(email[j] == '@'){
            //         afterat = email.substr(j, n - j);
            //         email = email.substr(0, j);
            //         break;
            //     }
            // }
            int k = email.find('@');
            afterat = email.substr(k, n - k);
            email = email.substr(0, k);
            //cout << email << "\n" << afterat << "\n";
            // for(int j = 0; j < n; j++){
            //     if(email[j] == '+'){
            //         email = email.substr(0, j);
            //        // cout << email << "\n";
            //     }
            // }
            k = email.find('+');
            email = email.substr(0, k);
            while(email.find('.') != string::npos){
                email.replace(email.find('.'), 1, "");
            }
            // for(int f = 0; f < n; f++){
            //     if(email[f] == '.'){
            //         email.replace(f, 1, "");
            //     }
            // }
            // bool condition = false;
            // for(int j = 0; j < newplace + 1; j++){
            //     if(email + afterat == arr[j]){
            //         condition = true;
            //     }
            // }
            // if(!condition){
            //     counter++;
            //     arr[newplace] = email + afterat;
            //     newplace++;
            // }
          //  cout << email << afterat << " " << counter << "\n";
          unique.insert(email + afterat);
        }
        cout << unique.size() << "\n";
    }
}
// 3
// foo@bar.com
// fO.o+baz123@bAR.com
// foo@bar..com
// 3
// c++@foo.com
// c...@Foo.com
// .c+c@FOO.COM