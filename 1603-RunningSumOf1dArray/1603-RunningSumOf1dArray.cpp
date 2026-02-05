// Last updated: 5/2/2026, 11:26:37 pm
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            result.push_back(sum);
        }

        return result;
    }
};
