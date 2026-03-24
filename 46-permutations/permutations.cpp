class Solution {
public:

void solve(vector<int> &nums, vector<vector<int>> &res, vector<int> &temp, vector<bool> &vis) {

    if (temp.size() == nums.size()) {
        res.push_back(temp);
     
    }

    for (int i = 0; i < nums.size(); i++) {

        if (vis[i]) continue;  // already used

        vis[i] = true;
        temp.push_back(nums[i]);

        solve(nums, res, temp, vis);

        temp.pop_back();
        vis[i] = false;
    }
}

vector<vector<int>> permute(vector<int>& nums) {

    vector<vector<int>> res;
    vector<int> temp;
    vector<bool> vis(nums.size(), false);

    solve(nums, res, temp, vis);

    return res;
}
};