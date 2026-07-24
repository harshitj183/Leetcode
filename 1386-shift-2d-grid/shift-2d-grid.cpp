class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> res(rows, vector<int>(cols));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                int index = i * cols + j;
                int newIndex = (index + k) % (rows * cols);

                int newRow = newIndex / cols;
                int newCol = newIndex % cols;

                res[newRow][newCol] = grid[i][j];
            }
        }

        return res;
    }
};