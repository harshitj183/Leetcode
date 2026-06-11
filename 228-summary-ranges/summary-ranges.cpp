class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        vector<string> res;

        for (int i = 0; i < nums.size(); i++) {

            string val = to_string(nums[i]);
            int start = nums[i];

            int j;
            for (j = i; j < nums.size() - 1; j++) {

                if ((long long)nums[j + 1] - nums[j] == 1) {
                    continue;
                } else {
                    break;
                }
            }

            if (start != nums[j]) {
                val = to_string(start) + "->" + to_string(nums[j]);
            }

            res.push_back(val);

            i = j;   // skip already processed elements
        }

        return res;
    }
};