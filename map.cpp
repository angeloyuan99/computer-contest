#include<iostream>
#include<map>
using namespace std;
int main(){
    //declaring a map to store integer, integer pair
    map<int, int> myMap;
    for(int i = 0; i < 10; i++){
        //adding elements into a map
        int x;
        cin >> x;
        if(myMap.count(x) == 0){
            myMap[x] = 1;
        } else{
            myMap[x] = myMap[x] + 1;
        }
    }

    //let's print the map with the key and values
    int mode = 0;
    int maxValue = 0;

    for(map<int, int>::iterator it = myMap.begin(); it != myMap.end(); it++){

        //cout << it->first << " => " << it->second << "\n";
        if(it -> second > maxValue){
            mode = it -> first;
            maxValue = it->second;
        }
    }
    return 0;

}