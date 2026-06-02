class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int count = 0;

        int sz = flowerbed.size();

       int left = 0;
       int right =0;

        for (int i = 0; i < sz; i++) {

            if (i == 0) {
                left = 0;

            } else {

                left = flowerbed[i - 1];
            }

            if (i == sz - 1) {

                right = 0;
            } else {

                right = flowerbed[i + 1];
            }

          if (flowerbed[i] == 0 &&
    left == 0 &&
    right == 0){

                count++;
                flowerbed[i] = 1;
            }
        }

        return count >= n;
    }
};