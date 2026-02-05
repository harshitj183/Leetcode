// Last updated: 5/2/2026, 11:26:25 pm
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
sort(nums.begin(),nums.end());
int i =0;
int org = original;

while(i<nums.size()){
if ( org == nums[i]){

 org =  org * 2;  
}
    i++;
}

return org;
    }
};