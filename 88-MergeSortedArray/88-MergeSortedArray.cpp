// Last updated: 5/2/2026, 11:29:25 pm
#include <algorithm>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for (int i = 0; i < n; ++i) {
            nums1[m + i] = nums2[i];
        }
       
        std::sort(nums1.begin(), nums1.end());
    }
};