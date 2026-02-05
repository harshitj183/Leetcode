// Last updated: 5/2/2026, 11:29:58 pm
#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle edge cases
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;  // Prevent overflow
        }
        
        if (dividend == 0) {
            return 0;  // Division by 0 returns 0
        }

        // Determine the sign of the result
        bool isNegative = (dividend < 0) ^ (divisor < 0);

        // Work with positive values using long
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        
        // Initialize quotient
        long long quotient = 0;

        // Left shift divisor to find highest bit to subtract
        while (a >= b) {
            long long temp = b, multiple = 1;
            
            // Shift divisor left until it exceeds dividend
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            
            // Subtract temp from dividend and add multiple to quotient
            a -= temp;
            quotient += multiple;
        }

        // Apply sign to the result
        quotient = isNegative ? -quotient : quotient;

        // Clamp result within the bounds of int
        if (quotient > INT_MAX) {
            return INT_MAX;
        }
        if (quotient < INT_MIN) {
            return INT_MIN;
        }

        return static_cast<int>(quotient);
    }
};
