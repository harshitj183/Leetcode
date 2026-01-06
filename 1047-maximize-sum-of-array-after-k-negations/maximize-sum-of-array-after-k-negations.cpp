class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        // Step 1 & 2: Flip negative numbers
        for (int i = 0; i < nums.size() && k > 0; i++) {
            if (nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }
        }

        // Step 3: If k is odd, flip the smallest element
        if (k % 2 == 1) {
            int mn = *min_element(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == mn) {
                    nums[i] = -nums[i];
                    break;
                }
            }
        }

        // Step 4: Calculate sum
        int sum = 0;
        for (int x : nums) {
            sum += x;
        }

        return sum;
    }
};
