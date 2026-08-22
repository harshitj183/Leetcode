class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int mul = 1;
        int zeroCount = 0;

        for (int x : nums) {
            if (x == 0) {
                zeroCount++;
            } else {
                mul *= x;
            }
        }

        for (int i = 0; i < nums.size(); i++) {

            if (zeroCount > 1) {
                nums[i] = 0;
            }
            else if (zeroCount == 1) {
                if (nums[i] == 0)
                    nums[i] = mul;
                else
                    nums[i] = 0;
            }
            else {
                nums[i] = mul / nums[i];
            }
        }

        return nums;
    }
};