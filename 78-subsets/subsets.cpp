class Solution {

public:

    void solve(vector<int>& nums,
               vector<int>& temp,
               int idx,
               vector<vector<int>>& res) {

        res.push_back(temp);

        for (int i = idx; i < nums.size(); i++) {

            temp.push_back(nums[i]);

            solve(nums, temp, i + 1, res);

            temp.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> res;
        vector<int> temp;

        solve(nums, temp, 0, res);

        return res;
    }
};