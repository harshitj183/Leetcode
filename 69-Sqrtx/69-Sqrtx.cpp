// Last updated: 5/2/2026, 11:29:37 pm
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
long long guess = x;
                   while (guess * guess > x) {
  guess = (guess + x / guess) / 2;
        }
        return guess;
    }
};
