// Last updated: 5/2/2026, 11:27:48 pm
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int bestL = area;
               int bestW = 1;
         int minDiff = area - 1;

        for (int w = 1; w <= area; w++) {
                    if (area % w == 0) {
                int l = area / w;
                if (l >= w && (l - w) < minDiff) {
                           bestL = l;
                    bestW = w;
                     minDiff = l - w;
                }
            }
        }

        return {bestL, bestW};
    }
};
