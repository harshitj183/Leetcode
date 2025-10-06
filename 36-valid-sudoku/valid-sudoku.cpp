class Solution {
public:




    bool isValidSudoku(vector<vector<char>>& board) {

      // Check rows
    for (int i = 0; i < 9; i++) {
        unordered_set<char> rowSet;
        for (int j = 0; j < 9; j++) {
            char c = board[i][j];
            if (c != '.') {
                if (rowSet.count(c)) return false; // duplicate mila
                rowSet.insert(c);
            }
        }
    }







    // Check columns
    for (int j = 0; j < 9; j++) {
        unordered_set<char> colSet;
        for (int i = 0; i < 9; i++) {
            char c = board[i][j];
            if (c != '.') {
                if (colSet.count(c)) return false;
            




                colSet.insert(c);
            }
        }
    }

 for (int startRow = 0; startRow < 9; startRow += 3) {
        for (int startCol = 0; startCol < 9; startCol += 3) {
            unordered_set<char> boxSet;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    char c = board[startRow + i][startCol + j];
                    if (c != '.') {
                        if (boxSet.count(c)) return false;
                        boxSet.insert(c);
                    }
                }
            }
        }
    }
    return true;
    
    // agar ye hame shi lage to hai 



    }
};