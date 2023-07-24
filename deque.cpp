#include<iostream>
#include<deque>
using namespace std; 
int main(){
    deque<int> max;
    deque<int> min;
    int N, M, C;
    cin >> N >> M >> C;
    int arr[N + 1];
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < M; i++){
        while(!max.empty() && max.back() < arr[i]){
            max.pop_back();
        }
        while(!min.empty() && min.back() > arr[i]){
            min.pop_back();
        }
        max.push_back(arr[i]);
        min.push_back(arr[i]);
    }
    bool condition = true;
    for(int i = M; i <= N; i++){
        if(i != M && max.front() == arr[i - M]){
            max.pop_front();
        }
        if(i != M && min.front() == arr[i - M]){
            min.pop_front();
        }
        while(!max.empty() && max.back() < arr[i]){
            max.pop_back();
        }
        while(!min.empty() && min.back() > arr[i]){
            min.pop_back();
        }
        max.push_back(arr[i]);
        min.push_back(arr[i]);
        if(max.front() - min.front() <= C){
            cout << i - M + 1 << "\n";
            condition = false;
        }
    }
    if(condition){
        cout << "NONE\n";
    }
    return 0;
}