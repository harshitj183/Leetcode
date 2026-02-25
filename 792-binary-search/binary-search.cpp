class Solution {
public:
int binarysearch(vector<int>& nums, int target, int left ,  int right){
if ( left> right ) return -1;
int mid = (left + right )/2;
if ( nums[mid]== target ) return mid;
else if (nums[mid] <target )  return binarysearch(nums,target,mid+1,right);
else  return binarysearch(nums,target,left ,mid-1);

}


    int search(vector<int>& nums, int target) {

int left =0;
int right  = nums.size()-1;
  return binarysearch(nums,target,left,right );




        
    }
};