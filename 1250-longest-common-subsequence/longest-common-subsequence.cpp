class Solution {
public:
    vector<vector<int>> dp;

    int rec(int i, int j, string &text1, string &text2) {

        // Base Case
        if (i == text1.size() || j == text2.size())
            return 0;

        // DP Check
        if (dp[i][j] != -1)
            return dp[i][j];

        // Transition
        if (text1[i] == text2[j])
            return dp[i][j] = 1 + rec(i + 1, j + 1, text1, text2);

        return dp[i][j] = max(rec(i + 1, j, text1, text2),
                              rec(i, j + 1, text1, text2));
    }

    int longestCommonSubsequence(string text1, string text2) {

        int n = text1.size();
        int m = text2.size();

        dp.assign(n, vector<int>(m, -1));

        return rec(0, 0, text1, text2);
    }
};