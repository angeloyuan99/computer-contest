#include<iostream>
#include<queue>
using namespace std;
bool graph[51][51];
void addfriend(int n, int j){
    graph[n][j] = true;
    graph[j][n] = true;
}
void delfriend(int n, int j){
    graph[n][j] = false;
    graph[j][n] = false;
}
void shortestpath(int src, int dest){
    int parent[51];
    for(int i = 0; i < 51; i++){
        parent[i] = 0;
    }
    queue<int> q;
    q.push(src);
    parent[src] = src;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        if(cur == dest){
            break;
        }
        for(int i = 1; i < 51; i++){
            if(graph[cur][i] && parent[i] == 0){
                q.push(i);
                parent[i] = cur;
            }
        }
        
    }
    int counter = 0, num = dest;
    if(parent[dest] == 0){
        cout << "Not connected\n";
        return;
    }
    while(parent[num] != src){
        counter++;
        num = parent[num];
    }
    cout << counter + 1 << "\n";
}
int main(){
    for(int i = 0; i < 51; i++){
        for(int j = 0; j < 51; j++){
            graph[i][j] = false;
        }
    }
    addfriend(1, 6);
    addfriend(2, 6);
    addfriend(6, 7);
    addfriend(3, 6);
    addfriend(6, 4);
    addfriend(6, 5);
    addfriend(3, 4);
    addfriend(4, 5);
    addfriend(3, 5);
    addfriend(3, 15);
    addfriend(15, 13);
    addfriend(12, 13);
    addfriend(13, 14);
    addfriend(11, 12);
    addfriend(12, 9);
    addfriend(11, 10);
    addfriend(16, 17);
    addfriend(17, 18);
    addfriend(16, 18);
    addfriend(9, 10);
    addfriend(8, 9);
    addfriend(7, 8);
    char command = 'a';
    while(command != 'q'){
        cin >> command;
        if(command == 'i'){
            int a, b;
            cin >> a >> b;
            addfriend(a, b);
        } else if(command == 'd'){
            int a, b;
            cin >> a >> b;
            delfriend(a, b);
        } else if(command == 'n'){
            int a, counter = 0;
            cin >> a;
            for(int i = 0; i < 51; i++){
                if(graph[a][i]){
                    counter++;
                }
            }
            cout << counter << "\n";
        } else if(command == 'f'){
            int counter = 0, a;
            cin >> a;
            bool check[51];
            for(int i = 0; i < 51; i++){
                check[i] = false;
            }
            for(int i = 0; i < 51; i++){
                if(graph[a][i]){
                    for(int j = 0; j < 51; j++){
                        if(graph[i][j]){
                            check[j] = true;
                        }
                    }
                }
            }
            for(int i = 0; i < 51; i++){
                if(graph[a][i]){
                    check[i] = false;
                }
            }
            check[a] = false;
            for(int i = 0; i < 51; i++){
                if(check[i]){
                    counter++;
                }
            }
            cout << counter << "\n";
        } else if(command == 's'){
            int a, b;
            cin >> a >> b;
            shortestpath(a, b);
        } 
    }
}