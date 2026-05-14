class Solution {
public:
bool issafe(int r, int c, vector<string> &board) {
    int n = board.size();

    // check column (up)
    for (int i = r - 1; i >= 0; i--) {
        if (board[i][c] == 'Q') return false;
    }

    // check left diagonal
    for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') return false;
    }

    // check right diagonal
    for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') return false;
    }

    return true;
}
 


 void backtrack(int row, vector<string> &board, vector<vector<string>> &res) {
        if (row == board.size()) {
            res.push_back(board);
            return;
        }

        for (int c = 0; c < board.size(); c++) {
            if (issafe(row, c, board)) {
                board[row][c] = 'Q';
                backtrack(row + 1, board, res);
                board[row][c] = '.';
            }
        }
    } 

    vector<vector<string>> solveNQueens(int n) {
  
  

 vector<vector<string>> res;
        vector<string> board(n, string(n, '.'));
        backtrack(0, board, res);
        return res;
      
    }
};