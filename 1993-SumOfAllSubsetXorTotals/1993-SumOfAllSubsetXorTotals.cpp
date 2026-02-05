// Last updated: 5/2/2026, 11:26:29 pm
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int OR = 0;

        for (int x : nums) {
            OR |= x;
        }

        return OR * (1 << (n - 1));
    }
};
