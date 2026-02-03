class Solution {
  
private:

    void backtrack(int idx, vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& temp) {
        int currentSum = accumulate(temp.begin(), temp.end(), 0);
        if (currentSum == target) {
            res.push_back(temp);
            return;
        }
        if (idx == candidates.size() || currentSum > target) {
            return;
        }
        
        temp.push_back(candidates[idx]);
        backtrack(idx + 1, candidates, target, res, temp);
        temp.pop_back();

        while (idx + 1 < candidates.size() && candidates[idx] == candidates[idx + 1]) {
            idx++;
        }
        backtrack(idx + 1, candidates, target, res, temp);
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        backtrack(0, candidates, target, res, temp);
        return res;
    }
};