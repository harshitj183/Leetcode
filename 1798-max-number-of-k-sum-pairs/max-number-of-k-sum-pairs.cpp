class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        unordered_map<int, int> mpv;
        int res = 0;

        for (auto v : nums) {
            mpv[v]++;
        }

        for (int i = 0; i < nums.size(); i++) {

            int val = nums[i];

            // Agar current element pehle hi use ho chuka hai
            if (mpv.find(val) == mpv.end() || 
               mpv.find(k - val) == mpv.end()
               || val == k - val && mpv[val] < 2){
                continue;
}
            res++;

            mpv[val]--;
            mpv[k - val]--;

            if (mpv[val] == 0)
                mpv.erase(val);

            if (mpv.find(k - val) != mpv.end() && mpv[k - val] == 0)
                mpv.erase(k - val);
        }

        return res;
    }
};