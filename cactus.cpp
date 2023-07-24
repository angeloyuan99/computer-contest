#include<iostream>
#include<math.h>
#include<iomanip>
#include<vector>
using namespace std;
int defenseoptions, enemies;
double health, dam, damagedealt;
int t[10000], l[10000];
double a[20], s[20], X[10000];
vector<int> start[10000], endd[10000];
int main () {
    bool condition = false;
	cin >> health >> enemies >> defenseoptions;
	for (int i = 0; i < defenseoptions; i++) {
		cin >> s[i] >> a[i];
		a[i] = a[i] / 100.0;
	}
	for (int i = 0; i < enemies; i++) {
		cin >> t[i] >> l[i] >> X[i];
		start[t[i]].push_back(i);
		endd[t[i] + l[i]].push_back(i);
	}
	for (int i = 0; i < 1010; i++) {
		for (size_t j=0; j<start[i].size(); j++) {
			int &next = start[i][j];
			damagedealt += X[next];
		}
		for (size_t j=0; j<endd[i].size(); j++) {
			int &next = endd[i][j];
			damagedealt -= X[next];
		}
		dam = damagedealt;
		for (int j = 0; j < defenseoptions; j++){
            dam = min(dam, (1.0 - a[j]) * (max(0.0, (damagedealt - s[j]))));
        }
		health -= dam;
		if (health <= 0){
			condition = true;
			break;
		}
	}
	if (condition){
        cout << "DO A BARREL ROLL!" << "\n";
    } else{
        cout << fixed << setprecision(2) << health << "\n";
    }
	return 0;
}