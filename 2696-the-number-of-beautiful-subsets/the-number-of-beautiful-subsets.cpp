class Solution {
public:

    bool isBeautiful(vector<int>& subset, int k) {

        for (int i = 0; i < subset.size(); i++) {
            for (int j = i + 1; j < subset.size(); j++) {
                if (abs(subset[i] - subset[j]) == k)
                    return false;
            }
        }

        return true;
    }

    void solve(vector<int>& nums, int k, int idx,
               vector<int>& subset, int &count) {

        if (idx == nums.size()) {

            if (!subset.empty() && isBeautiful(subset, k))
                count++;

            return;
        }

        // Take
        subset.push_back(nums[idx]);
        solve(nums, k, idx + 1, subset, count);
        subset.pop_back();

        // Not Take
        solve(nums, k, idx + 1, subset, count);
    }

    int beautifulSubsets(vector<int>& nums, int k) {

        int count = 0;
        vector<int> subset;

        solve(nums, k, 0, subset, count);

        return count;
    }
};