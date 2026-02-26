class Solution {
public:
    int binary_search(vector<int>& nums, int target, int start, int end) {

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            } 
            else if (target < nums[mid]) {
                end = mid - 1;
            } 
            else {
                start = mid + 1;
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        // Step 1: Find pivot (smallest element)
        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[end]) {
                start = mid + 1;
            } 
            else {
                end = mid;
            }
        }

        int pivot = start;

        // Step 2: Decide which half to search
        if (target >= nums[pivot] && target <= nums[nums.size() - 1]) {
            // Right sorted half
            return binary_search(nums, target, pivot, nums.size() - 1);
        } 
        else {
            // Left sorted half
            return binary_search(nums, target, 0, pivot - 1);
        }
    }
};