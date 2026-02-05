// Last updated: 5/2/2026, 11:26:18 pm
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;

        for (int i : nums) {
            if (i > 0) pos++;
            else if (i < 0) neg++;
        }

        return (pos >= neg) ? pos : neg;
    }
};
