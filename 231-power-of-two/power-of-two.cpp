class Solution {
public:
    bool isPowerOfTwo(int n) {

        if (n <= 0) return false; 
        int i = 0;

        while (true) {

            long long val = 1LL << i;   

            if (val == n) 
                return true;

            if (val > n) 
                return false;

            i++;
        }

        return false;
    }
};
