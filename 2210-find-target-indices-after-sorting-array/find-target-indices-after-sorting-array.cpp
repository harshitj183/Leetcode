class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
 


vector<int> res; 

 



int count =0;
int repeat =0;
 for(int  i =0 ; i < nums.size();i++){


if(target> nums[i]){

    count++;
}
if(target == nums[i]){

    repeat++;
}

 }




for(int i =0 ;i< repeat;i++){

res.push_back(count++);
    
}

return res;

    }
};