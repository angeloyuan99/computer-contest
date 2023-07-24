#include <iostream>
using namespace std;
int s[1048580];
int main() {
	int n, b, x, y, m, l, v;
	cin >> n;
	l = (1<<n);
//	cout << l << "\n";
	b = l;
	cin >> m;
	for (int i = 0; i < m; i++){
		cin >> x >> y;
		for (int i = 0; i < l; i++){ 
			if (i&(1<<(x-1)) and i&(1<<(y-1))){
				/*cout << i << endl;*/
				if (!s[i]){
					v++;
				}
				
				s[i]++;
			}
		}
	}
	cout << l - v << "\n";
}