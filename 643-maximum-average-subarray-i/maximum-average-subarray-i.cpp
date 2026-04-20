class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        long long curr_sum = 0;
        long long max_sum = LLONG_MIN;

        for (int j = 0; j < nums.size(); j++) {
            curr_sum += nums[j];

            if (j - i + 1 == k) {
                max_sum = max(max_sum, curr_sum);

                curr_sum -= nums[i];
                i++;
            }
        }

        return (double)max_sum / k;
    }
};