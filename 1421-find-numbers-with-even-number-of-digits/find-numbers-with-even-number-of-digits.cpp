class Solution {
public:
    int findNumbers(vector<int>& nums) {
        


        int num =0;



        for(int i : nums){
 
   if ( to_string(i).length() %  2 == 0){


    num++;
   }


        }


        return num;
    }
};