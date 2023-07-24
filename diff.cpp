#include<iostream>
using namespace std;
string s, t;
int point, del;
int main() {
	cin >> s >> t;

	if(s == t){
		cout << 0 << endl;
		return 0;
	}
	if(s.size() > t.size()){
		for(int i = s.size() - 1;i >= t.size();i--){
			del++;
			s.pop_back();
		}
	}
	if(s == t){
		cout << del << endl;
		return 0;
	}

	if(s.size() < t.size()){
		point = s.size();
		for(int i = 0;i < s.size();i++){
			if(s[i] != t[i]){
				point = i;
				break;
			}
		}

		cout << ((s.size() - point) * 2) + (t.size() - s.size()) + del << endl;
	}

	else{
		point = s.size();
		for(int i = 0;i < s.size();i++){
			if(s[i] != t[i]){
				point = i;
				break;
			}
		}

		cout << ((s.size() - point) * 2) + del << endl;
	}

	return 0;
}