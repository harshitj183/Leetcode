class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        bool hasNonZero = false;

        for (int x : nums) {
            xr ^= x;

            if (x != 0) {
                hasNonZero = true;
            }
        }

        // Puri array ka XOR already non-zero hai
        if (xr != 0) {
            return nums.size();
        }

        // XOR zero hai, lekin ek non-zero element
        // remove karne se XOR non-zero ho jayega
        if (hasNonZero) {
            return nums.size() - 1;
        }

        // Saare elements zero hain
        return 0;
    }
};