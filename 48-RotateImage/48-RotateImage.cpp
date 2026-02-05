// Last updated: 5/2/2026, 11:29:47 pm
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
                                  int n = matrix.size();
        
         
        for (int i = 0; i < n; ++i) {
                      for (int j = i; j < n; ++j) {
                                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
         
        for (int i = 0; i < n; ++i) {
                               reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
