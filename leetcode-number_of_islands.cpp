#include <bits/stdc++.h>
using namespace std;
void printGrid(vector<vector<char>> &grid)
{
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
            cout << grid[i][j];
        cout << endl;
    }
    cout << endl
         << endl;
}

void traverse(vector<vector<char>> &grid, int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    while (!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        if(grid[y][x]=='0'){
            q.pop();
            continue;
        }
        grid[y][x] = '0';
        q.pop();

        if (x + 1 < grid[y].size() && grid[y][x + 1] == '1')
            q.push({y, x + 1});
        if (x - 1 >= 0 && grid[y][x - 1] == '1')
            q.push({y, x - 1});
        if (y + 1 < grid.size() && grid[y + 1][x] == '1')
            q.push({y + 1, x});
        if (y - 1 >= 0 && grid[y - 1][x] == '1')
            q.push({y - 1, x});
    }
    // printGrid(grid);
}
int numIslands(vector<vector<char>> &grid)
{
    int counter = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == '1')
            {
                counter++;
                traverse(grid, i, j);
            }
        }
    }
    return counter;
}
int main()
{
    vector<vector<char>> grid{
        {'1', '0', '1', '1', '1'},
        {'1', '0', '1', '0', '1'},
        {'1', '1', '1', '0', '1'}};

    //[["1","0","1","1","1"],["1","0","1","0","1"],["1","1","1","0","1"]]

    cout << numIslands(grid) << endl;

    return 0;
}