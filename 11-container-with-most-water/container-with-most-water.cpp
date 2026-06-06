class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int hi1, hi2, hf, weight;
        int res = 0;

        while( left < right) {
            hi1 = height[left];
            hi2 = height[right];

            hf = min(hi1, hi2);
            weight = right - left;

            res = max(res, hf * weight);

            if (hi1 < hi2) {
                left++;
            } else {
                right--;
            }
        }

        return res;
    }
};












































 