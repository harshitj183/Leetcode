class Solution {
 
 
public:
    vector<int>     twoSum(vector<int>& nums, int target) {

vector <int> res;
 int l = nums.size();

for(int i =0 ; i<l ; i++ ){
for (int j=0 ; j< l; j++){ 
    if ( i != j){
      if (nums[i]+nums[j]== target){
            res.push_back(i);
     






   
       

            res.push_back(j);

  return res;      
        }
    }
}
 

}
     

return  {};

    }
};
