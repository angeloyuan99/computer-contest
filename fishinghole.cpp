#include <iostream>
using namespace std;
int main(){
    int bt, np, yp, total, counter = 0;
    cin >> bt >> np >> yp >> total;
    
    for(int b = 0; b <= total/bt; b++){
        for(int n = 0; n <= total/np; n++){
            for(int y = 0; y <= total/yp; y++){
                if(b*bt+n*np+y*yp<=total && b+n+y!=0){
                    cout<<b<<" Brown Trout, "<<n<<" Northern Pike, "<<y<<" Yellow Pickerel"<<endl;
                    counter++;
                }

            }

        }

    }
    cout<<"Number of ways to catch fish: "<<counter<<endl;
    return 0;
}
