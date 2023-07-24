#include <iostream>
using namespace std;
int main(){
    int pink, green, red, orange, raiseamount, counter = 0, leasttickets = 1000;
    cin >> pink >> green >> red >> orange >> raiseamount;
    for(int i = 0; i <= raiseamount / pink; i++){
        for(int j = 0; j <= raiseamount / green; j++){
            for(int k = 0; k <= raiseamount / red; k++){
                for(int l = 0; l <= raiseamount / orange; l++){
                    if(i * pink + j * green + k * red + l * orange == raiseamount){
                        counter++;
                        cout << "# of PINK is " << i << " # of GREEN is " << j << " # of RED is " << k << " # of ORANGE is " << l << "\n";
                        if(i + j + k + l < leasttickets){
                            leasttickets = i + j + k + l;
                        }
                    }
                }
            }
        }
    }
    cout << "Total combinations is " << counter << ".\n";
    cout << "Minimum number of tickets to print is " << leasttickets << ".\n";
    return 0;
}