class Solution {
public:
    int minElement(vector<int>& nums) {


int ooo = INT_MAX;
for(int  i =0 ; i <  nums.size(); i++){
int sum =0;
int n = nums[i];
 while(n>0){

sum  += n%10;
n = n/10;

 }



ooo =min(sum , ooo);


}
return ooo;
        
    }
};