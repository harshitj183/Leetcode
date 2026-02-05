// Last updated: 5/2/2026, 11:27:54 pm
#include <cmath>
class Solution {
public:
    int arrangeCoins(int n) {
        
        long long N = static_cast<long long>(n);
        
      
        long long l = (-1 + sqrt(1 + 8 * N)) / 2;
        
         return static_cast<int>(l);
    }
};
