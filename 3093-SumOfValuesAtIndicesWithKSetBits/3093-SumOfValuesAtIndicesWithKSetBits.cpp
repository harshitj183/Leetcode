// Last updated: 5/2/2026, 11:25:59 pm
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            // __builtin_popcount counts set bits in an integer
            if (__builtin_popcount(i) == k) {
                sum += nums[i];
            }
        }

        return sum;
    }
};
