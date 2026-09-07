class Solution {
public:
    int trap(vector<int>& height) {
        int count = 0;

        int left = 0;
        int right = height.size() - 1;

        int leftmax = 0;
        int rightmax = 0;
        while (left < right) {

            if (height[left] < height[right]) {

                /// a
                if (height[left] < leftmax) {

                    count += leftmax - height[left];
  
                } else {
                    leftmax = height[left];
                   
                }

                 left++;

            } else {

                /// b

                if (height[right] < rightmax) {
                    count += rightmax - height[right];
                } else {
                    rightmax = height[right];
               
                }



                     right--;
            }
        }

        return count;
    }
};