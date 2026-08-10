class Solution {
public:

    bool isSquare(long long n) {
        if (n < 0) return false;

        long long r = sqrt(n);
        return r * r == n;
    }

    bool winnerSquareGame(int n) {

        vector<bool> dp(n + 1, false);

        dp[0] = false; // no move => lose

        for (int i = 1; i <= n; i++) {

            for (int j = 1; j * j <= i; j++) {

                if (dp[i - j * j] == false) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};