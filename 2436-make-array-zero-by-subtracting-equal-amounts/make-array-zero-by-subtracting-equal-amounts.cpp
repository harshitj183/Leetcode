class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;
        int prev = 0;

        for (int x : nums) {
            if (x > prev) {
                count++;
                prev = x;
            }
        }
        return count;
    }
};
