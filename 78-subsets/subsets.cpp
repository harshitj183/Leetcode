
class Solution {
public:

    void solve(vector<int>& nums, int idx, vector<int> temp,
               vector<vector<int>>& res) {

        if(idx >= nums.size()) {
            res.push_back(temp);
            return;
        }

        // Include
        temp.push_back(nums[idx]);
        solve(nums, idx + 1, temp, res);

        // Exclude
        temp.pop_back();
        solve(nums, idx + 1, temp, res);
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> res;
        vector<int> temp;

        solve(nums, 0, temp, res);

        return res;
    }
};
