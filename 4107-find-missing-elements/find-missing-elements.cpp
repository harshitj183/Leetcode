class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> arr;
        sort(nums.begin(), nums.end());

        int val = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == val) continue;   // duplicate

            while (nums[i] > val + 1) {
                arr.push_back(val + 1);
                val++;
            }

            val = nums[i];
        }

        return arr;
    }
};