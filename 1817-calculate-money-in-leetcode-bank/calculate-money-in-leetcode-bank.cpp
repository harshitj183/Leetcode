class Solution {
public:

    int sum(int x){
        return (x * (x + 1)) / 2;
    }

    int totalMoney(int n) {

        int divi = n / 7;
        int rem = n % 7;

        int weekSum = divi * sum(7) + (divi * (divi - 1) / 2) * 7;

        int start = divi + 1;
        int remSum = rem * start + (rem * (rem - 1)) / 2;

        return weekSum + remSum;
    }
};