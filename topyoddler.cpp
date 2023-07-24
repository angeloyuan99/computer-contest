for (int i = 0 ; i < k ; i++)
{
    for (int j = 0 ; j < n ; j++)
	y [j] = y [j] + fi.readInt ();
    for (int j = 0 ; j < n ; j++)
    {
	int t = 1;
	for (int p = 0 ; p < n ; p++)
	    if (p != j && y [p] > y [j])
		t++;
	if (t > w [j])
	    w [j] = t;
	r [j] = t;
    }
}
for (int j = 0 ; j < n ; j++)
    if (r [j] == 1)
	c.println ("Yodeller " + (j + 1) + " is the TopYodeller: score " + y [j] + ", worse rank " + w [j]);
#include<iostream>
using namespace std;
int main(){
    int n, k;
    int y[100], r[100], w[100];
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        y[i] = 0;
        w[i] = 1;
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            
        }
    }
}