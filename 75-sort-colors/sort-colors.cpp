class Solution { 
public:

    static bool cmp(int a, int b){
        return b > a;  // ascending
    }

    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
    }
};