class Solution {
public:
    int findGCD(vector<int>& nums) {

 int s = nums.size();

      sort(nums.begin(),nums.end() )  ;


int min = nums[0];
int max = nums[s-1];
int res =1;

for(int i =1; i <= min  && i<=  max; i++){

if( min%i == 0 && max%i ==0){



    res = i;
}





}

return  res;



    }
};