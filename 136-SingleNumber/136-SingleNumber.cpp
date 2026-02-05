// Last updated: 5/2/2026, 11:29:11 pm
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
    for (int num : nums) {
     res ^= num;   
  }
        return res;   
    }
};
