#include <stdio.h>
#include<iostream>
using namespace std;
struct {
	int A;
	int S;
} typedef def;
int pen (int dps, def *d, int D) {
	int min = dps * 100;
	int temp;
	for (int i = 0; i < D; i++) {
		temp = (dps - d[i].S) * (100 - d[i].A);
		if (temp < min){
			min = temp;
        }
	}
	return min;
}

int main(){
	int H, D, E;
    cin >> H >> D >> E;
	int h = 100 * H;
	def d[D];
	for (int i = 0; i < D; i++) {
		cin >> d[i].A >> d[i].S;
	}
	int change[1001];
	for (int i = 0; i < 1001; i++){
		change[i] = 0;
    }
	int T, L, X;
	for (int i = 0; i < E; i++) {
		cin >> T >> L >> X;
		change[T] += X;
		change[T + L] -= X;
	}

	int dps = 0;
	for (int i = 0; i < 1000 && h > 0; i++) {
		dps += change[i];
		if (dps){
			h = h - pen(dps, d, D);
        }
	}

	if (h > 0){
		printf("%0.2f", (float)h / 100);
    }
	else{
		cout << "DO A BARREL ROLL!\n";
    }
	return 0;
}