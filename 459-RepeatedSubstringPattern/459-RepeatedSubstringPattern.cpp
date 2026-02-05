// Last updated: 5/2/2026, 11:27:50 pm
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int l = s.size();

        for (int i = 1; i <= l / 2; i++) {

            if (l % i == 0) {

                string pattern = s.substr(0, i);
                string temp = "";

                for (int k = 0; k < l / i; k++) {
                    temp += pattern;
                }

                if (temp == s)
                    return true;
            }
        }
        return false;
    }
};
