// Last updated: 5/2/2026, 11:28:16 pm
#include <bitset>

class Solution {
public:
    vector<int> countBits(int n) {
               vector<int> arr(n + 1);  
        int temp;

                       for (int i = 0; i <= n; i++) {
            temp = i;
             bitset<32> bits(temp);  
                          arr[i] = bits.count();   
        }

        return arr;
    }
};
