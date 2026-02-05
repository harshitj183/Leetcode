// Last updated: 5/2/2026, 11:28:15 pm
class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && (log10(n) / log10(4)) == (int)(log10(n) / log10(4));
    }
};
