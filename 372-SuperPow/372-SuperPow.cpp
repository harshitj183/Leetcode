// Last updated: 5/2/2026, 11:28:06 pm
class Solution {
public:
    const int MOD = 1337;

    int powerMod(int a, int b) {
                                             int result = 1;
                                  a %= MOD;  
        while (b > 0) {
            if (b % 2 == 1) {  
                                                               result = (result * a) % MOD;
            }
            a = (a * a) % MOD;  
                                            b /= 2;
        }
        return result;
    }

    int superPow(int a, vector<int>& b) {
                               int result = 1;
        for (int digit : b) {
                                                  result = powerMod(result, 10) * powerMod(a, digit) % MOD;
        }
        return result;
    }
};
