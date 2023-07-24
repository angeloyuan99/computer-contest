#include<iostream>
using namespace std;
int main(){
    int nfor, nback, bfor, bback, total,temp, ntotal = 0, btotal = 0, counter = 0;
    cin >> nfor >> nback >> bfor >> bback >> total;
    temp = total;
    while(total > 0){
        if(counter % 2 == 0){
            if(total < nfor){
                ntotal += total;
                total = 0;
            }
            else{
                ntotal+= nfor;
                total -= nfor;
            }
        }
        else{
            if(total<nback){
                ntotal -= total;
                total = 0;
            }
            else{
                ntotal-= nback;
                total -=nback;
            }
        }
        counter++;
    }
    counter = 0;
    while(temp > 0){
        if(counter % 2 == 0){
            if(temp<bfor){
                btotal += temp;
                temp = 0;
            }
            else{
                btotal += bfor;
                temp -= bfor;
            }
        }
        else{
            if(temp < bback){
                btotal -= temp;
                temp = 0;
            }
            else{
                btotal-= bback;
                temp -= bback;
            }
        }
        counter++;
    }
    if(btotal == ntotal){
        cout << "Tied\n";
    }
    else if(btotal > ntotal){
        cout << "Byron\n";
    }
    else{
        cout << "Nikky\n";
    }
    return 0;
}
