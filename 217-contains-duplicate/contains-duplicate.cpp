class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
int res;

sort(nums.begin(),nums.end());

bool check = false;

 for(int i = 0 ; i< nums.size()-1; i++){


    if ( nums[i] == nums[i+1] ) check = true;
 }
return check;


    }
};

