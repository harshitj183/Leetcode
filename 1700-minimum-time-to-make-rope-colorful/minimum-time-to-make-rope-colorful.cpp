class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {

        int res = 0;
        char temp = colors[0];
        int idx = 0;

        for (int i = 1; i < colors.size(); i++) {

            if (temp == colors[i]) {

                res += min(neededTime[idx], neededTime[i]);

                if (neededTime[i] > neededTime[idx]) {
                    idx = i;
                }

            } else {
                temp = colors[i];
                idx = i;
            }
        }

        return res;
    }
};