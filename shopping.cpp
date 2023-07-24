#include<iostream>
#include<algorithm>
using namespace std;
class shop{
    public:
        int position, distancefromzero;
};
bool ValueCmp(shop const & a, shop const & b){
    return a.distancefromzero < b.distancefromzero;
}
int main(){
    int minutes, n, minutesused = 0, position = 0, j = 0;
    cin >> minutes >> n;
    shop shops[n];
    for(int i = 0; i < n; i++){
        cin >> shops[i].position;
        shops[i].distancefromzero = abs(shops[i].position);
    }
    sort(shops, shops + n, ValueCmp);
    // for(int i = 0; i < n; i++){
    //     cout << shops[i].position << " " << shops[i].distancefromzero << "\n";
    // }
    while(minutesused + abs(position - shops[j].position) < minutes){
        minutesused += abs(position - shops[j].position);
        position = shops[j].position;
       // cout << minutesused << " " << position << "\n";
        j++;
    }
    // if(j == 5){
    //     for(int i = 0; i < n; i++){
    //         cout << shops[i].position << " " << shops[i].distancefromzero << "\n";
    //     }
    // }
    cout << j << "\n";
    return 0;

}
// 24
// 12
// 2 3 -5 6 -7 8 9 10 -12 -13 14 -15