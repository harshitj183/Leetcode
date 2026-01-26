class Solution {
public:
    int findMin(vector<int>& nums) {
       
   int temp= nums[0] ;   
       for(int i : nums){

if(i<temp){


    temp = i;
}

       }

       return temp;
    }
};