class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> res;

        for (int i : nums1) {
            bool found = false;
            int temp = -1;

            for (int j : nums2) {

                if (j == i) {
                    found = true;
                    continue;
                }

                if (found && j > i) {
                    temp = j;
                    break;
                }
            }

            res.push_back(temp);
        }

        return res;
    }
};