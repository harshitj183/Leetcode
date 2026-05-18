class Solution {
public:
    int minSwaps(vector<int>& nums) {

        int n = nums.size();

        int ones = 0;
        for (int x : nums) {
            ones += x;
        }

        // already grouped
        if (ones <= 1) return 0;

        int curr = 0;

        // first window
        for (int i = 0; i < ones; i++) {
            curr += nums[i];
        }

        int mx = curr;

        // circular sliding window
        for (int i = ones; i < n + ones; i++) {

            curr -= nums[(i - ones) % n];
            curr += nums[i % n];

            mx = max(mx, curr);
        }

        return ones - mx;
    }
};