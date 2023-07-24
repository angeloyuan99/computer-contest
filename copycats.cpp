#include<iostream>
#include<string>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        string input;
        cin >> ws;
        getline(cin, input);
		for (int i = 1; i <= input.length(); i++) {
			if (input.substr(i) == input.substr(0, input.length() - i)) {
				cout << input.substr(0, i) + input << "\n";
				break;
			}
		}
    }
}