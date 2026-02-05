// Last updated: 5/2/2026, 11:28:00 pm
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
              while (i < s.length() && j < t.length()) {
                if (s[i] == t[j]) {
                i++;
            }
                                j++;
        }

        bool m = i == s.length();
                      return m;
    }
};
