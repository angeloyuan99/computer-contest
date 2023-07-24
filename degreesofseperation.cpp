#include<iostream>
#include<queue>
using namespace std;
int friends[51][51];
void shortestpath(int src, int dest){
    int parent[51] = {0};
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
            if(friends[cur][i] == 1 && parent[i] == 0){
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
void addFriend(int x, int y) {
    friends[x][y] = 1;
    friends[y][x] = 1;
}
void deleteFriend(int x, int y){
    friends[x][y] = 0;
    friends[y][x] = 0;
}
int main(){
    char input;
    int x, y;
    addFriend(2, 6);
    addFriend(1, 6);
    addFriend(6, 7);
    addFriend(6, 3);
    addFriend(6, 4);
    addFriend(6, 5);
    addFriend(3, 5);
    addFriend(3, 15);
    addFriend(7, 8);
    addFriend(8, 9);
    addFriend(9, 10);
    addFriend(9, 12);
    addFriend(10, 11);
    addFriend(11, 12);
    addFriend(15, 13);
    addFriend(12, 13);
    addFriend(13, 14);
    addFriend(16, 17);
    addFriend(17, 18);
    addFriend(16, 18);
    
    
    while(true){
        cin >> input;
        if(input == 'q'){
            break;
        } 
        if(input == 'i'){
            cin >> x >> y;
            addFriend(x, y);
        } else if(input == 'd'){
            cin >> x >> y;
            deleteFriend(x, y);
        } else if(input == 'n'){
            cin >> x;
            int counter = 0;
            for(int i = 0; i < 51; i++){
                if(friends[x][i] == 1){
                    counter++;
                }
            }
            cout << counter << "\n";
        } else if(input == 'f'){
            int counter = 0, friendcounter = 0;;
            cin >> x;
            bool notused[51] = {false};
            for(int i = 0; i < 51; i++){
                if(friends[x][i] == 1){
                    for(int j = 0; j < 51; j++){
                        if(friends[i][j] == 1 && friends[x][j] == 0 && j != x && notused[j] == false){
                            counter++;
                            notused[j] = true;
                        }
                    }
                }
            }
            cout << counter << "\n";
        } else if(input == 's'){
            cin >> x >> y;
            shortestpath(x, y);
        }
    }
}
// i x y - make person x and person y friends. If they are already friends, no change needs to be
// made. If either x or y is a new person, add them.
// • d x y - delete the friendship between person x and person y.
// • n x - output the number of friends that person x has.
// • f x - output the number of "friends of friends" that person x has. Notice that x and direct friends
// of x are not counted as "friends of friends."
// • s x y - output the degree of separation between x and y. If there is no path from x to y, output
// "Not connected".
// • q - quit the program.