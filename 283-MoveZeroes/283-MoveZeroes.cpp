// Last updated: 5/2/2026, 11:28:24 pm
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;  
       
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
