#include<iostream>
#include<vector>
using namespace std;
vector<long> rimurus(vector<long> v, long limit){
    vector<long> n;
    for(long i = 0; i < v.size(); i++){
        long num = v[i] * 10 + 2;
        if(num <= limit){
            n.push_back(num);
            // cout<<num<<"\n";
        }
        num = v[i] * 10 + 3;
        if(num <= limit){
            n.push_back(num);
        }
    }
    return n;
}

int main(){
    long num;
    cin>>num;
    if(num<=1){
        cout<<"1"<<"\n";
        return 0;
    }
    if(num==2){
        cout<<"1"<<"\n";
        return 0;
    }
    if(num==3){
        cout<<"2"<<"\n";
        return 0;
    }
    vector<long> base;
    base.push_back(2);
    base.push_back(3);
    long counter = 0;
    vector<long> temp = base;
    while(true){
        counter+=base.size();
        base=rimurus(base,num);
        if(base.size() == 0){
            break;
        }
    }
    cout << counter << "\n";
    return 0;
}
