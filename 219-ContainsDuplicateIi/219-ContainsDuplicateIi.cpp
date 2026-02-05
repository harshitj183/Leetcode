// Last updated: 5/2/2026, 11:28:40 pm
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;

        for (int i = 0; i < nums.size(); i++) {
            if (lastIndex.count(nums[i])) {
                if (i - lastIndex[nums[i]] <= k) {
                    return true;
                }
            }
            lastIndex[nums[i]] = i;
        }
        return false;
    }
};
