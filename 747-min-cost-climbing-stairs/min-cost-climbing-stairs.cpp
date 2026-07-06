vector<int> dp(1001, -1);

class Solution {
public:
    int solve(vector<int>& cost, int i) {
        if (i >= cost.size())
            return 0;

        if (dp[i] != -1)
            return dp[i];

        return dp[i] = cost[i] + min(solve(cost, i + 1),
                                     solve(cost, i + 2));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        fill(dp.begin(), dp.end(), -1);   
        return min(solve(cost, 0), solve(cost, 1));
    }
};