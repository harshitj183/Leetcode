// Last updated: 5/2/2026, 11:28:10 pm
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
vector<int> arr; 
for (int i : nums1){
        
for  (int j : nums2){

if ( i == j)
{ 
 if (find(arr.begin(), arr.end(), i) == arr.end()) {
       arr.push_back(i);
    }  
 
}
  
}

}
   return arr;      
    }
 
};