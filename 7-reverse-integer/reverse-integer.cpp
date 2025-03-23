class Solution {
public:
    int reverse(int x) {
        long long rev = 0;  // Using long long to handle overflow during operations
        
        while (x != 0) {
            int digit = x % 10;  // Get the last digit
            rev = rev * 10 + digit;  // Add the digit to the reversed number
            
            // Check for overflow after every step
            if (rev > INT_MAX || rev < INT_MIN) {
                return 0;
            }
            
            x /= 10;  // Remove the last digit
        }
        
        return (int)rev;
    }
};
