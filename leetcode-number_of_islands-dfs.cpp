#include<bits/stdc++.h>
using namespace std;

int dir[5] = {0, 1, 0, -1, 0};

void run(vector<vector<char>>& grid, int i, int j){

    int n = grid.size();
    int m = grid[0].size();

    stack< pair<int,int> > pile;

    pile.push(make_pair(i, j));
    while(!pile.empty()){
        int y = pile.top().first;
        int x = pile.top().second;

        pile.pop();
        if(grid[y][x]=='0') continue;
        grid[y][x] = '0';


        for(int d=0 ; d<4 ; d++){
            int ny = y + dir[d];
            int nx = x + dir[d+1];
            if(ny>=0 && ny<n && nx>=0 && nx<m && grid[ny][nx]=='1'){
                pile.push(make_pair(ny,nx));
            }
        }
    }
}

int numIslands(vector<vector<char>>& grid) {
    int n = grid.size();
    if(n<1) return 0;
    int m = grid[0].size();

    int islands = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(grid[i][j]=='1'){
                islands++;
                run(grid, i, j);
            }
        }
    }
    return islands;

}

int main(){
    
    vector<vector<char>> grid{
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}};

    //[["1","0","1","1","1"],["1","0","1","0","1"],["1","1","1","0","1"]]

    cout << numIslands(grid) << endl;
    return 0;
}