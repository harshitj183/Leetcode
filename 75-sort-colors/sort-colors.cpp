bool cmp(int a, int b) {
    return a < b;   // ascending
}

class Solution { 
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
    }
};