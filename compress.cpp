#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string input, solution = "";
        int counter = 1;
        //cin >> input; 
        cin >> ws;
        getline(cin, input);
        char lastcharacter = input[0];
        for(int j = 1; j < input.length() + 1; j++){
            if(input[j] == lastcharacter){
                counter++;
            } else{
                solution += to_string(counter) + " " + lastcharacter + " ";
                counter = 1;
                lastcharacter = input[j];
            }
        }
        cout << solution << "\n";
    }
}
// 4
// +++===!!!!
// 777777......TTTTTTTTTTTT
// (AABBC)
// 3.1415555

// 3 + 3 = 4 !
// 6 7 6 . 12 T
// 1 ( 2 A 2 B 1 C 1 )
// 1 3 1 . 1 1 1 4 1 1 4 5