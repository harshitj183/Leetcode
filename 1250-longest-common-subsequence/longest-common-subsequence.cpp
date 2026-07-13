class Solution {
public:
vector<vector<int>> dp = vector<vector<int>>(1001, vector<int>(1001, -1));

    int rec(int i, int j, string &text1, string &text2) {

        
        if (i == text1.size() || j == text2.size())
            return 0;

        
        if (dp[i][j] != -1)
            return dp[i][j];

       
        if (text1[i] == text2[j])
            return dp[i][j] = 1 + rec(i + 1, j + 1, text1, text2);

        return dp[i][j] = max(rec(i + 1, j, text1, text2),
                              rec(i, j + 1, text1, text2));
    }

    int longestCommonSubsequence(string text1, string text2) {

        int n = text1.size();
        int m = text2.size();

   

        return rec(0, 0, text1, text2);
    }
};