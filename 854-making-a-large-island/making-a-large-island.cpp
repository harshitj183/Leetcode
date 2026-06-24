class Solution {
public:

    int solve(vector<vector<int>>& grid, int i, int j, int color) {

        if (i < 0 || j < 0 ||
            i >= grid.size() ||
            j >= grid[0].size() ||
            grid[i][j] != 1)
            return 0;

        grid[i][j] = color;

        return 1 +
               solve(grid, i + 1, j, color) +
               solve(grid, i - 1, j, color) +
               solve(grid, i, j + 1, color) +
               solve(grid, i, j - 1, color);
    }

    int largestIsland(vector<vector<int>>& grid) {

        int n = grid.size();

        unordered_map<int, int> area;

        int color = 2;
        int ans = 0;

 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == 1) {

                    area[color] = solve(grid, i, j, color);

                    ans = max(ans, area[color]);

                    color++;
                }
            }
        }

     

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == 0) {

                    unordered_set<int> st;

                    if (i > 0) st.insert(grid[i - 1][j]);
                    if (i < n - 1) st.insert(grid[i + 1][j]);
                    if (j > 0) st.insert(grid[i][j - 1]);
                    if (j < n - 1) st.insert(grid[i][j + 1]);

                    int cur = 1;

                    for (auto id : st) {
                        cur += area[id];
                    }

                    ans = max(ans, cur);
                }
            }
        }

        return ans;
    }
};