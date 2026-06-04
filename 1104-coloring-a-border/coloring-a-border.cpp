class Solution {
public:

    vector<vector<int>> vis;
    vector<pair<int,int>> border;
    int originalColor;

    bool isinborder(vector<vector<int>>& grid, int row, int col){

        int m = grid.size();
        int n = grid[0].size();

        if(row == 0 || row == m-1 || col == 0 || col == n-1)
            return true;

        if(grid[row+1][col] != originalColor) return true;
        if(grid[row-1][col] != originalColor) return true;
        if(grid[row][col+1] != originalColor) return true;
        if(grid[row][col-1] != originalColor) return true;

        return false;
    }

    void solve(vector<vector<int>>& grid, int row, int col){

        if(row < 0 || row >= grid.size() ||
           col < 0 || col >= grid[0].size())
            return;

        if(vis[row][col])
            return;

        if(grid[row][col] != originalColor)
            return;

        vis[row][col] = 1;

        if(isinborder(grid,row,col))
            border.push_back({row,col});

        solve(grid,row,col+1);
        solve(grid,row,col-1);
        solve(grid,row+1,col);
        solve(grid,row-1,col);
    }

    vector<vector<int>> colorBorder(vector<vector<int>>& grid,
                                    int row,
                                    int col,
                                    int color) {

        originalColor = grid[row][col];

        vis.assign(grid.size(),
                   vector<int>(grid[0].size(),0));

        solve(grid,row,col);

        for(auto &p : border){
            grid[p.first][p.second] = color;
        }

        return grid;
    }
};