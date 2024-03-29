#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
struct Cell{
public:
	char type;
	int r;
	int c; 
	int count = 1;
};

vector<Cell> findneighbours(Cell p, vector<Cell> cells[], int mr, int mc){
	vector<Cell> ret;
	int r = p.r;
	int c = p.c;
	switch(p.type){
		
		case '*': break;
		
		case '-': 
		if(c+1 < mc && c+1 >= 0)ret.push_back(cells[r][c + 1]);
		if(c-1 < mc && c-1 >= 0)ret.push_back(cells[r][c - 1]);
		break;
		
		case '|':
		if(r+1 < mr && r+1 >= 0) ret.push_back(cells[r + 1][c]);
		if(r-1 < mr && r-1 >= 0) ret.push_back(cells[r - 1][c]);
		break;
		
		case '+':
		if(c+1 < mc && c+1 >= 0)ret.push_back(cells[r][c + 1]);
		if(c-1 < mc && c-1 >= 0)ret.push_back(cells[r][c - 1]);
		if(r+1 < mr && r+1 >= 0) ret.push_back(cells[r + 1][c]);
		if(r-1 < mr && r-1 >= 0) ret.push_back(cells[r - 1][c]);
		
		break;
		
	}
	
 return ret;
}

queue<Cell> q;
void bfs(Cell s, int r, int c, vector<Cell> cells[], vector<vector<bool>> vis){
	vis[s.r][s.c] = true;
	q.push(s);
	
	while(!q.empty()){
		Cell current = q.front();
		q.pop();
		if(current.r == r - 1 && current.c == c - 1 && current.type != '*'){
			cout << current.count << "\n";
			return;
		}
		
		vector<Cell> neighbours = findneighbours(current, cells, r, c);
		
		for(int i = 0; i < neighbours.size(); i++){
			Cell nc = neighbours[i];
			if(!vis[nc.r][nc.c]){
				vis[nc.r][nc.c] = true;
				cells[nc.r][nc.c].count = current.count + 1;
				q.push(cells[nc.r][nc.c]);
			}
		}
		
	}
	cout << "-1\n";
	return;
}



int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	
	for(int o = 0; o < t; o++){
		
		int r, c;
		cin >> r >> c;
		string maze[r];
		vector<Cell> cells[r];
		for(int i = 0; i < r; i++){
			cin >> maze[i];
		}
		
		vector<vector<bool> > vis;
		
		for(int i = 0; i < r; i++){
			vector<bool> temp;
			for(int j = 0; j < c; j++){
				temp.push_back(false);
                Cell temp;
                temp.type = maze[i][j];
                temp.r = i;
                temp.c = j;
				cells[i].push_back(temp);
			}
			vis.push_back(temp);
		}

		bfs(cells[0][0], r, c, cells, vis);
			
	}
	
	
	return 0;
}