 
class Solution {
public:
    int jump(vector<int>& nums) {

        int crr = 0;
        int count = 0;

        while (crr < nums.size() - 1) {

            int temp = nums[crr];

            // agar direct last index tak pahuch sakte ho
            if (crr + temp >= nums.size() - 1) {
                count++;
                break;
            }

            int maxi = crr + 1;

            for (int i = crr + 1; i <= crr + temp; i++) {

                if (i + nums[i] > maxi + nums[maxi]) {
                    maxi = i;
                }
            }

            crr = maxi;
            count++;
        }

        return count;
    }
};