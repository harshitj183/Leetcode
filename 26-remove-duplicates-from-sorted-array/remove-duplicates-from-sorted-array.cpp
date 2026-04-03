class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int temp = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == temp) {
                nums.erase(nums.begin() + i);
                i--;  
            } else {
                temp = nums[i];
            }
        }

        return nums.size();
    }
};