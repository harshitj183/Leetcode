 class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
                   vector<pair<int, int>> scoreWithIndex;

        for (int i = 0; i < n; i++) {
                                   scoreWithIndex.push_back({score[i], i});
        }

        sort(scoreWithIndex.begin(), scoreWithIndex.end(), greater<pair<int, int>>());

        vector<string> result(n);

        for (int i = 0; i < n; i++) {
            int index = scoreWithIndex[i].second;
                  if (i == 0)
                result[index] = "Gold Medal";
                       else if (i == 1)
                result[index] = "Silver Medal";
               else if (i == 2)
                result[index] = "Bronze Medal";
                      else
                result[index] = to_string(i + 1);
        }

        return result;
    }
};