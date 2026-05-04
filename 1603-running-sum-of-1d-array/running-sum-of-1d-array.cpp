class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int sum = 0;

        for(int &n : nums){
            sum += n;
            n = sum;
        }

        return nums;
    }
};