class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        long long sum = 0;

        int fail = 0;

        // First window
        for (int i = 0; i < k; i++) {
            sum += nums[i];

            freq[nums[i]]++;

            if (freq[nums[i]] == 2) {
                fail++;
            }
        }

        long long maxsum = 0;

        if (fail == 0) {
            maxsum = sum;
        }

        // Sliding window
        for (int i = k; i < nums.size(); i++) {

            // Add new element
            sum += nums[i];
            freq[nums[i]]++;

            if (freq[nums[i]] == 2) {
                fail++;
            }

            // Remove old element
            sum -= nums[i - k];

            if (freq[nums[i - k]] == 2) {
                fail--;
            }

            freq[nums[i - k]]--;

            // Valid window
            if (fail == 0) {
                maxsum = max(maxsum, sum);
            }
        }

        return maxsum;
    }
};