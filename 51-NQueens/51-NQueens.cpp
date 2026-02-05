// Last updated: 5/2/2026, 11:29:45 pm
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> res;
    int n;
    void place(int row, vector<int>& cols, vector<int>& d1, vector<int>& d2, vector<string>& board) {
        if (row == n) {
            res.push_back(board);
            return;
        }
        for (int col = 0; col < n; ++col) {
            if (cols[col] || d1[row+col] || d2[row-col+n-1]) continue;
            cols[col]=d1[row+col]=d2[row-col+n-1]=1;
            board[row][col] = 'Q';
            place(row+1, cols, d1, d2, board);
            board[row][col] = '.';
            cols[col]=d1[row+col]=d2[row-col+n-1]=0;
        }
    }

    vector<vector<string>> solveNQueens(int N) {
        n = N;
        res.clear();
        vector<int> cols(n,0), d1(2*n-1,0), d2(2*n-1,0);
        vector<string> board(n, string(n, '.'));
        place(0, cols, d1, d2, board);
        return res;
    }
};
