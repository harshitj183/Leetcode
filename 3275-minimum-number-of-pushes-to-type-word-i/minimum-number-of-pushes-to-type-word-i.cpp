class Solution {
public:
    int minimumPushes(string word) {

        int sz = word.size();

        int res = 0;

        // Complete groups of 8
        int n = sz / 8;

        // Remaining letters
        int rem = sz % 8;

        // Cost of complete groups
        // 8*1 + 8*2 + 8*3 + ...
        int temp = 8 * (n * (n + 1) / 2);

        res += temp;

        // Cost of remaining letters
        res += rem * (n + 1);

        return res;
    }
};