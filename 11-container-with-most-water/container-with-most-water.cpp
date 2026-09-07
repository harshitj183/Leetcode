class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right = height.size()-1;

int maxwater = 0;
        while(left < right){

int widthv = right-left;

int heightv  = min(height[left],height[right]);

maxwater  = max(maxwater,widthv * heightv);
  
if(height[left] <= height[right])  {

    left++;
}else{

    right--;
}
  
  
     }


     return maxwater;
    }
};