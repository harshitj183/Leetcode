 
class Solution {
public:

    int countkr(int i, int j, int rows, int cols,
                vector<vector<int>>& board) {

        int count = 0;

        for (int x = -1; x <= 1; x++) {
            for (int y = -1; y <= 1; y++) {

                
                if (x == 0 && y == 0)
                    continue;

                int ni = i + x;
                int nj = j + y;

                // Boundary check
                if (ni >= 0 && ni < rows &&
                    nj >= 0 && nj < cols) {

                    if (board[ni][nj] == 1) {
                        count++;
                    }
                }
            }
        }

        return count;
    }

    void gameOfLife(vector<vector<int>>& board) {

        int rows = board.size();
        int cols = board[0].size();

        vector<vector<int>> next = board;

        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < cols; j++) {

                int z = countkr(i, j, rows, cols, board);

                if (board[i][j] == 1) {

                    if (z < 2 || z > 3)
                        next[i][j] = 0;
                    else
                        next[i][j] = 1;

                } else {

                    if (z == 3)
                        next[i][j] = 1;
                    else
                        next[i][j] = 0;
                }
            }
        }

        board = next;
    }
};
 