class Solution {
public:

    void dfs(vector<vector<int>>& grid, vector<vector<int>>& time,
             int i, int j, int t) {

        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()|| grid[i][j] == 0)
            return;

    

        if (t >= time[i][j])
            return;

        time[i][j] = t;

        dfs(grid, time, i + 1, j, t + 1);
        dfs(grid, time, i - 1, j, t + 1);
        dfs(grid, time, i, j + 1, t + 1);
        dfs(grid, time, i, j - 1, t + 1);
    }

    int orangesRotting(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> time(m, vector<int>(n, INT_MAX));

         
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2)
                    dfs(grid, time, i, j, 0);
            }
        }

        int ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == 1) {
                    if (time[i][j] == INT_MAX)
                        return -1;

                    ans = max(ans, time[i][j]);
                }
            }
        }

        return ans;
    }
};