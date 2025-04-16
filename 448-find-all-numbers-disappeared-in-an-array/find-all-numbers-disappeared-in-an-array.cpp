class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> res;

        // Store all numbers present in nums
        for (int num : nums) {
            seen.insert(num);
        }

        // Check which numbers from 1 to n are missing
        for (int i = 1; i <= nums.size(); i++) {
            if (seen.find(i) == seen.end()) {
                res.push_back(i);
            }
        }

        return res;
    }
};
