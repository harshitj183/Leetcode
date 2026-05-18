class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int target = k * threshold;

        int sum = 0;

        // first window
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        int res = 0;

        if (sum >= target) {
            res++;
        }

        // sliding window
        for (int i = k; i < arr.size(); i++) {

            sum -= arr[i - k];

            sum += arr[i];

            if (sum >= target) {
                res++;
            }
        }

        return res;
    }
};