#include<iostream>
#include<string>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            string n;
            cin >> n;
            int megatotal = 0;
            for(int k = n.length() - 1; k >= 0; k -= 2){
              //  cout << n[k] << "\n";
                int a = (n[k] - '0') * 2, total = 0;
                string b = to_string(a);
                for(int l = 0; l < b.length(); l++){
                    total += b[l] - '0';
                    
                }
                megatotal += total;
            }
            for(int k = n.length() - 2; k >= 0; k -= 2){
                //cout << n[k] << "\n";
                megatotal += n[k] - '0';
            }
            cout << (megatotal * 9) % 10;
        }
        cout << "\n";
    }

}
// 389796 4565280784 8451692334 46 465949539
// 97699 7392253 54011409 8073542288 303142477
// 334 349839 12593962 02497993 9468
// 53173 2901524 2493367526 39094 83530
// 08080532 5023002 57849 9853641952 027179

//55874a