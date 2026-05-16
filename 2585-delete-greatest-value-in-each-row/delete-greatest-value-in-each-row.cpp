class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        
        for (auto &row : grid) {
            sort(row.begin(), row.end());
        }

        int ans = 0;
 
        for (int col = 0; col < n; col++) {
            int mx = 0;

            for (int row = 0; row < m; row++) {
                mx = max(mx, grid[row][col]);
            }

            ans += mx;
        }

        return ans;
    }
};