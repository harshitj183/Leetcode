// Last updated: 5/2/2026, 11:25:55 pm
class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        long long totalCost = 0;
        vector<long long> charCost(26, 0);

        for (int i = 0; i < s.size(); i++) {
            totalCost += cost[i];
            charCost[s[i] - 'a'] += cost[i];
        }

        long long maxKeep = 0;
        for (int i = 0; i < 26; i++) {
            maxKeep = max(maxKeep, charCost[i]);
        }

        return totalCost - maxKeep;
    }
};
