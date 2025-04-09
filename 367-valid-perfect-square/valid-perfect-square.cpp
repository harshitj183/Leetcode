class Solution {
public:
    bool isPerfectSquare(int num) {
        long long x = sqrt(num);  
        return x * x == num;
    }
};
