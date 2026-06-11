class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        vector<string> res;

        int j = 0;

        for (int i = 1; i <= n && j < target.size(); i++) {

            if (target[j] != i) {

                res.push_back("Push");
                res.push_back("Pop");
            }
            else {

                res.push_back("Push");
                j++;
            }
        }

        return res;
    }
};