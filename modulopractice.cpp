#include<iostream>
using namespace std;
int time(int t, int c){
    int a = t + c;
    if(a > 2400){
        a -= 2400;
    } else if(a < 0){
        a += 2400;
    }
    if(a % 100 >= 60){
        a = (a / 100 * 100 + 100) + (a % 100 - 60);
    }
    return a;
}
int main(){
    int blah, a = 0;
    cin >> blah;
    cout << time(blah, 0) << " in Ottawa\n";
    cout << time(blah, -300) << " in Victoria\n";
    cout << time(blah, -200) << " in Edmonton\n";
    cout << time(blah, -100) << " in Winnipeg\n";
    cout << time(blah, 0) << " in Toronto\n";
    cout << time(blah, 100) << " in Halifax\n";
    cout << time(blah, 130) << " in St. John's\n";
    return 0;

}