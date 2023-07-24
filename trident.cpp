#include<iostream>
using namespace std;
int main(){
	int t, s, h;
	cin >> t >> s >> h;
	for (int i = 0; i < t; i++){
		cout << "*";
		for (int k = 0; k < s; k++){
			cout << " ";
		}
		cout << "*";
		for (int k = 0; k < s; k++){
			cout << " ";
		}
		cout << "*\n";
	}
	for (int i = 0; i < 3 + s * 2; i++){
		cout << "*";
	}
	cout << "\n";
	for (int i = 0; i < h; i++){
		for (int j = 0; j < s + 1; j++){
			cout << " ";
		}
		cout << '*' << "\n";
	}

	return 0;
}