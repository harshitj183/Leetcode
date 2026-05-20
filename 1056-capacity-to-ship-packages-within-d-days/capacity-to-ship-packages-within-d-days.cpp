class Solution {
public:

    bool possible(vector<int>& weights, int days, int cap) {

        int usedDays = 1;
        int current = 0;

        for (int w : weights) {

            if (current + w > cap) {
                usedDays++;
                current = 0;
            }

            current += w;
        }

        return usedDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        int ans = right;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (possible(weights, days, mid)) {
                ans = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return ans;
    }
};