class Solution {
public:
    int search(vector<int>& nums, int target) {
int bul = -1;
for(int i= 0; i <nums.size(); i++){
if (nums[i]== target){

bul = i;

    }
}
 






  return bul;  }
};