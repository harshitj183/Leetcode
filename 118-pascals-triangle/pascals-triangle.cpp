class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> res;

        for (int i = 0; i < numRows; i++) {

            vector<int> temps;

            for (int j = 0; j <= i; j++) {

                if (j == 0 || j == i) {

                    temps.push_back(1);
                    continue;
                }

                temps.push_back(res[i - 1][j - 1] + res[i - 1][j]);
            }

            res.push_back(temps);
        }

        return res;
    }
};