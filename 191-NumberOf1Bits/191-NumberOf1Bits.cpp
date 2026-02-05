// Last updated: 5/2/2026, 11:28:48 pm
class Solution {
public:
    int hammingWeight(uint32_t n) {
                              int count = 0;
                    while (n) {
            count += (n & 1);  
                            n >>= 1;      
        }
        return count;
    }
};
