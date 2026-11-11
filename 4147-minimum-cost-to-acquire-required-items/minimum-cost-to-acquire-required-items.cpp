class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long count = 0;

        int nt = min(need1, need2);

        if(costBoth <= cost1 + cost2) {
            count += 1LL * nt * costBoth;

            need1 -= nt;
            need2 -= nt;
        }

        count += 1LL * need1 * cost1;
        count += 1LL * need2 * cost2;

        // Both items se extra requirement bhi fulfill ho sakti hai
        count = min(count, 1LL * max(need1 + nt, need2 + nt) * costBoth);

        return count;
    }
};