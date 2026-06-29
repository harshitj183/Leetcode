class Solution {
public:

    void solve(int k, int n, int start, int sum,
               vector<int>& temp,
               vector<vector<int>>& res) {

        if (temp.size() == k) {
            if (sum == n)
                res.push_back(temp);
            return;
        }

        for (int i = start; i <= 9; i++) {

            if (sum + i > n)
                break;

            temp.push_back(i);

            solve(k, n, i + 1, sum + i, temp, res);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>> res;
        vector<int> temp;

        solve(k, n, 1, 0, temp, res);

        return res;
    }
};