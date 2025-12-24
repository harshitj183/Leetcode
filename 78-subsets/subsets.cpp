class Solution {
public:
 
void solve(vector<int> &nums,int idx,vector <int> temp,    vector<vector<int>> &res ){
  res.push_back(temp);

  
for(int i= idx ;i< nums.size(); i++){

 temp.push_back(nums[i]);

    solve (nums,i+1,temp ,res );
temp.pop_back();
}
  


}

 


    vector<vector<int>> subsets(vector<int>& nums) {

vector <int> temp;
    vector<vector<int>>  res;

solve(nums,0 ,temp,res);



return res;
    }
};