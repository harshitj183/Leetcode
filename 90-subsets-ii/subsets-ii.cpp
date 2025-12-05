#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        dfs(0, nums, temp, res);
        return res;
    }

private:
    void dfs(int idx, vector<int>& nums, vector<int>& temp, vector<vector<int>>& res) {
        res.push_back(temp);
        for (int i = idx; i < (int)nums.size(); ++i) {
            // skip duplicates at the same recursion level
            if (i > idx && nums[i] == nums[i - 1]) continue;
            temp.push_back(nums[i]);
            dfs(i + 1, nums, temp, res);
            temp.pop_back();
        }
    }
};
