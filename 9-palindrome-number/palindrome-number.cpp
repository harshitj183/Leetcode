class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0) return false;

        // Convert integer to string
        string numStr = to_string(x);

        // Create a reversed copy of the string
        string numStr1 = numStr;
        reverse(numStr1.begin(), numStr1.end());

        // Check if the original and reversed strings are the same
        return numStr1 == numStr;
    }
};
