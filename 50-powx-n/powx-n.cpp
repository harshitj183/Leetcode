class Solution {
public:
    double myPow(double x, long long n) {

        if (n == 0)
            return 1;

        if (n > 0) {

            if (n % 2 == 0) {

                double half = myPow(x, n / 2);

                return half * half;

            } else {

                double half = myPow(x, n / 2);

                return half * half * x;
            }
        }

        if (n < 0) {

            return 1 / myPow(x, abs(n));
        }

        return 0;
    }
};