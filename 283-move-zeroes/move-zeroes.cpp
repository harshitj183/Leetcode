class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int left = 0;
        int right = 0;   // 🔧 change (1)

        while (right < nums.size()) {   // 🔧 change (2)

            if (nums[right] != 0) {     // 🔧 change (3)
                swap(nums[left], nums[right]);
                left++;                // 🔧 change (4)
            }

            right++;                   // 🔧 change (5)
        }
    }
};