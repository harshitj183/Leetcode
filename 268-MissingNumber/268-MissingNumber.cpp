// Last updated: 5/2/2026, 11:28:26 pm
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        

int n = nums.size();
int  exsum=  n*(n +1) /2;
for (int i : nums) {

exsum -= i;

}

return exsum;

    }
}; 