class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      // remove shifts unwanted elements to end
    auto it = remove(nums.begin(), nums.end(), val);

    // erase removes them from vector
    nums.erase(it, nums.end());

    // return new size
    return nums.size();    
    }
};