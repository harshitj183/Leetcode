class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int lex = n - 1;  
        for (int i = n - 2; i >= 0; i--) {
            if (i + nums[i] >= lex) {
                lex = i;    } } 
        return lex == 0;
    }
};
