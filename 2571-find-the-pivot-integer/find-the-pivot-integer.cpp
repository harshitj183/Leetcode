class Solution {
public:
    int pivotInteger(int n) {

        int left = 1;
        int right = n;

        int leftsum = left;
        int rightsum = right;

        while (left < right) {

            if (leftsum < rightsum) {
                leftsum += ++left;
            }
            else {
                rightsum += --right;
            }
        }

        if (leftsum == rightsum)
            return left;

        return -1;
    }
};