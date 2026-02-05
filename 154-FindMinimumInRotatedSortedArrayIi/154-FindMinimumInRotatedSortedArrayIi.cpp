// Last updated: 5/2/2026, 11:29:03 pm
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