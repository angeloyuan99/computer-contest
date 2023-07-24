#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> XtoY[20005];
vector<int> YtoX[20005];
int main(){
    int n, maximumsize = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        for(int j = 0; j < XtoY[x].size(); j++){
            for(int k = 0; k < YtoX[XtoY[x][j]].size(); k++){
                vector<int>::iterator it = find(XtoY[YtoX[XtoY[x][j]][k]].begin(), XtoY[YtoX[XtoY[x][j]][k]].end(), y); 
                if(it != XtoY[YtoX[XtoY[x][j]][k]].end()){
                    int currenttotal = abs(x - YtoX[XtoY[x][j]][k]) * abs(y - XtoY[x][j]);
                    if(currenttotal > maximumsize){
                        maximumsize = currenttotal;
                    }
                }
            }
        }
        XtoY[x].push_back(y);
        YtoX[y].push_back(x);
    }
    cout << maximumsize << "\n";
}
// 9
// 1 1
// 5 5
// 7 7
// 5 7
// 7 5
// 10 10
// 5 10
// 10 5
// 20 20