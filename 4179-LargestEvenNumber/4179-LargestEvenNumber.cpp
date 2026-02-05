// Last updated: 5/2/2026, 11:25:50 pm
class Solution {
public:
    string largestEven(string s) {
        int ed = -1;
        string stg = "";

        for (int i = s.size() - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 0) {
                ed = i;
                break;
            }
        }

        if (ed == -1) return "";

        for (int i = 0; i <= ed; i++) {
            stg += s[i];
        }

        return stg;
    }
};
