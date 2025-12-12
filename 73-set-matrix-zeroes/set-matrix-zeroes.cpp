class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int numRows = matrix.size();
        int numCols = matrix[0].size();

        bool firstRowHasZero = false;
        bool firstColHasZero = false;

        // Step 1: Check if the first column needs to be zeroed
        for (int i = 0; i < numRows; ++i) {
            if (matrix[i][0] == 0) {
                firstColHasZero = true;
                break;
            }
        }

        // Step 2: Check if the first row needs to be zeroed
        for (int j = 0; j < numCols; ++j) {
            if (matrix[0][j] == 0) {
                firstRowHasZero = true;
                break;
            }
        }

        // Step 3: Use first row and column to mark zeros
        for (int i = 1; i < numRows; ++i) {
            for (int j = 1; j < numCols; ++j) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;  // Mark row
                    matrix[0][j] = 0;  // Mark column
                }
            }
        }

        // Step 4: Zero out cells based on marks
        for (int i = 1; i < numRows; ++i) {
            for (int j = 1; j < numCols; ++j) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 5: Zero out the first row if needed
        if (firstRowHasZero) {
            for (int j = 0; j < numCols; ++j) {
                matrix[0][j] = 0;
            }
        }

        // Step 6: Zero out the first column if needed
        if (firstColHasZero) {
            for (int i = 0; i < numRows; ++i) {
                matrix[i][0] = 0;
            }
        }
    }
};