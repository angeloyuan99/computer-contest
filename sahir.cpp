#include<iostream>
#include<list>
#include<queue>
using namespace std;
int main(){
    int homes, roads, sahir, crush;
    cin >> homes >> roads >> sahir >> crush;
    int graph[homes + 1][homes + 1];
    for(int i = 0; i < homes + 1; i++){
        for(int j = 0; j < homes + 1; j++){
            graph[i][j] = 0;
        }
    }
    for(int i = 0; i < roads; i++){
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    bool visited[homes + 1];
    for(int i = 0; i < homes + 1; i++){
        visited[i] = false;
    }
    queue<int> list;
    list.push(sahir);
    while(!list.empty()){
        int a = list.front();
        list.pop();
        if(a == crush){
            cout << "GO SHAHIR!\n";
            return 0;
        }
        visited[a] = true;
        for(int i = 0; i < homes + 1; i++){
            if(graph[a][i] == 1 && visited[i] == false){
                list.push(i);
            }
        }
    }
    cout << "NO SHAHIR!\n";
    return 0;
}