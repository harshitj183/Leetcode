class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x <0) return false;
        int org =x;
   long long n;     
          while(x > 0) {
        n = n * 10 + x % 10;
        x = x / 10;
    }

        
   return org==n;     
    }
};