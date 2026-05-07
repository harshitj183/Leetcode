class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int itr = 1;
        bool got1 = false;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] <= 0) continue;

            if(nums[i] == 1) {
                got1 = true;
                continue;
            }

            if(got1) {

                if(nums[i] == itr)
                    continue;

                if(nums[i] != itr + 1)
                    return itr + 1;

                itr++;
            }
        }

        if(!got1)
            return 1;

        return itr + 1;
    }
};