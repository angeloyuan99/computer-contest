#include <iostream>
using namespace std;
int main(){
    int num, rounds;
    cin>>num>>rounds;
    int current[num];
    for(int i = 0; i < num; i++){
        current[i] = 0;
    }
    int totalranks[num][rounds];
    for(int i = 0; i < num; i ++){
        for(int j = 0; j < num; j++){
            totalranks[i][j] = 0;
        }
    }
    for(int t = 0; t < rounds; t++){
        for(int i = 0; i < num; i++){
            int temp;
            cin>>temp;
            current[i]+=temp;
        }
        for(int j = 0; j < num; j++){
            int counter = 2;
            for(int i = 0; i < num; i++){
                if(current[i] < current[j])counter++;
            }
            totalranks[t][j] = counter;
        }
    }
    int max = -2147483648, maxindex;
    for(int i = 0; i < num; i++){
        if(current[i]>max){
            max = current[i];
            maxindex = i;
        }
    }
    cout<<"Yodeller "<<maxindex+1<<" is the TopYodeller: score "<<max<<", worst rank ";
    max = num;
    for(int i = 0; i < rounds; i++){
        if(max>totalranks[i][maxindex])max = totalranks[i][maxindex];
    }
    cout<<max<<endl;
    return 0;
}
