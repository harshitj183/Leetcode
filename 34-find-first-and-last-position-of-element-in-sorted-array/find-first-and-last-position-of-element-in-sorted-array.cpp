class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> res;
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {

            if (nums[left] == target && nums[right] == target) {
                res.push_back(left);
                res.push_back(right);
                return res;
            }

            if (nums[left] != target) left++;
            if (nums[right] != target) right--;    
        }

        return {-1, -1};
    }
};