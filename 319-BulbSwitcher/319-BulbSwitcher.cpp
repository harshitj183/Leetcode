// Last updated: 5/2/2026, 11:28:18 pm
class Solution {
public:
    int bulbSwitch(int n) {
        int count = 0;
        for (int i = 1; (i * i) <= n; ++i) {
            count++;  
        }
        return count;
    }
};
