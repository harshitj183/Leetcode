class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        int res = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int crr = 0;

        for (int i = 0; i < s.size(); i++) {

            if (crr < g.size() && g[crr] <= s[i]) {

                crr++;
                res++;
            }
        }

        return res;
    }
};