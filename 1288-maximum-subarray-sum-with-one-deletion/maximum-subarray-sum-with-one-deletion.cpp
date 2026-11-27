class Solution {
public:
    int maximumSum(vector<int>& arr) { // kadane algorithm (best for i ?)
        int ans = arr[0];

        int noDelete = arr[0];   // Max sum ending here with no deletion
        int oneDelete = 0;       // Max sum ending here with one deletion

        for(int i = 1; i < arr.size(); i++) {
            int prevNoDelete = noDelete;

            noDelete = max(noDelete + arr[i], arr[i]);

            // Delete current element OR use a previously deleted element
            oneDelete = max(oneDelete + arr[i], prevNoDelete);

            ans = max(ans, max(noDelete, oneDelete));
        }

        return ans;
    }
};