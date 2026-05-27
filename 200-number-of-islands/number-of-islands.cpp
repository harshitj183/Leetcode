class Solution {
public:

    void dfs(vector<vector<char>>& grid, int row, int col) {

        // boundary + invalid checks
        if (row < 0 || col < 0 ||
            row >= grid.size() || col >= grid[0].size() ||
            grid[row][col] != '1') {
            return;
        }

        // mark visited
        grid[row][col] = '9';

        // 4 directions
        dfs(grid, row - 1, col);
        dfs(grid, row + 1, col);
        dfs(grid, row, col - 1);
        dfs(grid, row, col + 1);
    }

    int numIslands(vector<vector<char>>& grid) {

        int res = 0;

        for (int i = 0; i < grid.size(); i++) {

            for (int j = 0; j < grid[0].size(); j++) {

                if (grid[i][j] == '1') {

                    dfs(grid, i, j);
                    res++;
                }
            }
        }

        return res;
    }
};