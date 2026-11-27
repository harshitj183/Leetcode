class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
 
        int msum = nums[0];
        int currsum = nums[0];
     int currrsum = nums[0];
     int mnsum = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            currsum = max(currsum + nums[i], nums[i]);
            msum = max(currsum, msum);

   currrsum = min(currrsum + nums[i], nums[i]);
            mnsum = min(currrsum, mnsum);



        }

        return max(msum,abs(mnsum));
    
        
    }
};