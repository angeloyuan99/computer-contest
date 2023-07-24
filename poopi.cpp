#include<iostream>
#include<math.h>
#include<iomanip>
#include<vector>
using namespace std;
int D, E;
double H, dam, curr_dam;
int t[1010], l[1010];
double a[20], s[20], X[1010];
vector<int> start[1010], enddo[1010];
bool condition;
int main () {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> H >> D >> E;
	for (int i = 0; i < D; i++) {
		cin >> a[i] >> s[i];
		a[i] /= 100.0;
	}
	for (int i = 0; i < E; i++) {
		cin >> t[i] >> l[i] >> X[i];
		start[t[i]].push_back(i);
		enddo[t[i] + l[i]].push_back(i);
	}
	for (int i = 0; i < 1010; i++) {
		for (size_t j=0; j<start[i].size(); j++) {
			int &next = start[i][j];
			curr_dam += X[next];
		}
		for (size_t j=0; j<enddo[i].size(); j++) {
			int &next = enddo[i][j];
			curr_dam -= X[next];
		}
		dam = curr_dam;
		for (int j=0; j<D; j++) dam = min(dam, (1.0 - a[j]) * (max(0.0, (curr_dam - s[j]))));
		H -= dam;
		if (H <= 1e-10) {
			condition = 1;
			break;
		}
	}
	if (condition) cout << "DO A BARREL ROLL!" << "\n";
	else cout << fixed << setprecision(2) << H << "\n";
	return 0;
}