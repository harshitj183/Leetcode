class Solution {
public:
    int minOperations(std::vector<int>& nums, int k) {
        
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= k) return i;
        }
        return nums.size();
    }
};