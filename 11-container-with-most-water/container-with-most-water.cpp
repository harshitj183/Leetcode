class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int hi1, hi2, hf, weight;
        int res = 0;

        for (; left < right;) {
            hi1 = height[left];
            hi2 = height[right];

            hf = min(hi1, hi2);
            weight = right - left;

            res = max(res, hf * weight);

            if (hi1 < hi2) {
                left++;
            } else {
                right--;
            }
        }

        return res;
    }
};























































// class Solution {
// public:
//     int maxArea(vector<int>& height) {
// int hi1;

// int hi2;
// int hf;
// int weight;
// int res =0;
//        for(int i = 0 ; i< height.size();i++){
// hi1 = height[i];

// for(int j =0; j< height.size();j++){


// if (i == j){


//     continue;
// }

// hi2 = height[j];

 
// weight = abs(j - i);

//   hf =min(hi1,  hi2); 
// res = max(res, hf * weight);
   
// }

 
//        } 

//        return res;
//     }
// };