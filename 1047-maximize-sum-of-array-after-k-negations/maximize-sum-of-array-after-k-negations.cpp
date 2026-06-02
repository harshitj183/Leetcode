class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {

        int chnc = k;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {

            if (chnc && nums[i] < 0) {
                nums[i] = -nums[i];
                chnc--;
            }
        }

        int res = 0;
        int mn = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            res += nums[i];
            mn = min(mn, nums[i]);
        }
        
        if (chnc % 2)
            res -= 2 * mn;

        return res;
    }
};