// Last updated: 5/2/2026, 11:29:01 pm
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) return 0;

        int minVal = *min_element(nums.begin(), nums.end());
        int maxVal = *max_element(nums.begin(), nums.end());

        int n = nums.size();
        if (n == 2) return maxVal - minVal;  

        int gap = (maxVal - minVal + n - 2) / (n - 1);   

        vector<int> minBucket(n - 1, INT_MAX);
        vector<int> maxBucket(n - 1, INT_MIN);

        for (int num : nums) {
            if (num == minVal || num == maxVal) continue;   
            int index = (num - minVal) / gap;
            minBucket[index] = min(minBucket[index], num);
            maxBucket[index] = max(maxBucket[index], num);
        }

        int prevMax = minVal, maxGap = 0;
        for (int i = 0; i < n - 1; i++) {
            if (minBucket[i] == INT_MAX) continue;  
            maxGap = max(maxGap, minBucket[i] - prevMax);
            prevMax = maxBucket[i];
        }
        maxGap = max(maxGap, maxVal - prevMax);   

        return maxGap;
    }
};
