class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> eveno;
        vector<int> oddo;

        for (int i : nums) {
            if (i % 2 == 0)
                eveno.push_back(i);
            else
                oddo.push_back(i);
        }

        int e = 0, o = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (i % 2 == 0)
                nums[i] = eveno[e++];
            else
                nums[i] = oddo[o++];
        }

        return nums;
    }
};