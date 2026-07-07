class Solution {
public:


vector<int>dp = vector<int>(2500,-1);


 
    int solve(vector<int>& nums, int idx) {
        int ans = 1; 
      
        if (dp[idx] != -1)
            return dp[idx];

 


        for (int j = idx + 1; j < nums.size(); j++) {
            if (nums[j] > nums[idx]) {
                ans = max(ans, 1 + solve(nums, j));
            }
        }
 
        return dp[idx] = ans;



    }

    int lengthOfLIS(vector<int>& nums) {
        int res = 1;



        for (int i = nums.size() - 1; i >= 0; i--) {
            res = max(res, solve(nums, i));
        }

        return res;
    }
};