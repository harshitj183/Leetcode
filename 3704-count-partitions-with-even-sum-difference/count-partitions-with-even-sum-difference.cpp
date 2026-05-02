class Solution {
public:
    int countPartitions(vector<int>& nums) {

        int partcount = 0;

        int total = 0;
        for (int j = 0; j < nums.size(); j++) {
            total += nums[j];
        }

        for (int i = 1; i < nums.size(); i++) {

            int left = 0;
            int right = 0;

            for (int j = 0; j < i; j++) {
                left += nums[j];
            }

            right = total - left;

            if (abs(left - right) % 2 == 0) {   // ✅ FIX
                partcount++;
            }
        }

        return partcount;
    }
};