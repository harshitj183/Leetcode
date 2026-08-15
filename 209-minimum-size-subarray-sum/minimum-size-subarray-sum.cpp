class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s = nums.size();

        int resc = INT_MAX;
        int i = 0;
        int j = 0;
        int csum = 0;

        while (j < s || csum >= target) {

            if (csum < target && j < s) {

                csum += nums[j];
                j++;

            }
            else if (csum > target) {

                resc = min(resc, j - i);

                csum -= nums[i];
                i++;

            }
            else {

                // csum == target
                resc = min(resc, j - i);

                csum -= nums[i];
                i++;
            }
        }

        if (resc == INT_MAX) {
            return 0;
        }

        return resc;
    }
};