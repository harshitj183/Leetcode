class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> res;

        int n = nums.size();

        for (int i = 0; i < n; ) {

            // unique element
            if (i == n - 1 || nums[i] != nums[i + 1]) {
                res.push_back(nums[i]);
                i++;
            }
            else {
                // skip duplicate pair
                i += 2;
            }
        }

        return res;
    }
};