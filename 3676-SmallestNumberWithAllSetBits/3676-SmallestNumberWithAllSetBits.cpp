// Last updated: 5/2/2026, 11:25:57 pm
class Solution {
public:
    int smallestNumber(int n) {
        int mask = 1;                // 1 (binary "1")
        while (mask < n) {
            mask = (mask << 1) | 1; // append a 1: 1 -> 11 -> 111 -> ...
        }
        return mask;
    }
};
