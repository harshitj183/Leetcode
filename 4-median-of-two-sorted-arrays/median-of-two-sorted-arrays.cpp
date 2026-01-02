class Solution {
public:
    auto findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     for(int i:nums2)  nums1.push_back(i);

     sort(nums1.begin(),nums1.end());

    int l = nums1.size();


    if(l%2==0){

    return (( nums1[(l/2) -1] + nums1[(l/2)])/2.0) ;


    }

  else{

    return nums1[((l+1)/2)-1]/1.0;
  } 


    }
};