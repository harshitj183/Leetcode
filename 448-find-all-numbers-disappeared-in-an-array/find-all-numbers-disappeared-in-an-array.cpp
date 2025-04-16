class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> res;
 
        for (int num : nums) {
            seen.insert(num);
        }
 
        for (int i = 1; i <= nums.size(); i++) {
            if (seen.find(i) == seen.end()) {
                res.push_back(i);
            }
        } 
            return res;
    }
};
