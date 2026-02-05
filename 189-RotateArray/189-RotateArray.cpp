// Last updated: 5/2/2026, 11:28:49 pm
class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
                k = k % n;
                 std::vector<int> temp(n);
        
                     for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
              }
        
        nums = temp;
    }
};
