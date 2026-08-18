class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mapx;

        for (int i = 0; i <= nums.size() - k; i++) {
            unordered_set<int> st;

            for (int j = i; j < i + k; j++) {
                st.insert(nums[j]);
            }

            for (int num : st) {
                mapx[num]++;
            }
        }

        int res = -1;

        for (auto val : mapx) {
            if (val.second == 1) {
                res = max(res, val.first);
            }
        }

        return res;
    }
};