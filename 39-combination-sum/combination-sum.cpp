class Solution {
public:

    bool isvalid(vector<int>& temp, int target){
        int sum = 0;
        for (int i = 0; i < temp.size(); i++){
            sum += temp[i];
        }
        return sum == target;
    }
  
    void solve(vector<int>& candidates, int idx,
               vector<vector<int>>& res, vector<int>& temp, int target){

        // ✅ base case fix
        if (target == 0){
            res.push_back(temp);
            return;
        }

        if (target < 0) return;

        // ✅ loop same, just fix push + recursion
        for(int i = idx; i < candidates.size(); i++){
            temp.push_back(candidates[i]);

            // ✅ pass same i (reuse allowed)
            solve(candidates, i, res, temp, target - candidates[i]);

            temp.pop_back();
        }
    }
  
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;                  // ❌ reference hata diya
        vector<vector<int>> res;

        solve(candidates, 0, res, temp, target);

        return res;       
    }
};