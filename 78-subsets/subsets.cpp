class Solution {
   private:
void solve(vector<int>  &nums, int idx, vector<int> &temp ,vector<vector<int>> &res){

   res.push_back(temp);
       for(int i = idx;i < nums.size();i++ ) {
     temp.push_back(nums[i]);
     solve(nums,i+1, temp,res);
       temp.pop_back();     
    }     
    
    }    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;  
  
    vector<int> temp;
 solve(nums,0,temp,res );

   
return res;
    }

   

};