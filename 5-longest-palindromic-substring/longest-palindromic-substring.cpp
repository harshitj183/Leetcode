class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
               int start = 0, len = 1;
  
                            for (int i = 0; i < n;) {
            int l = i, r = i;

            while (r + 1 < n && s[r] == s[r + 1]) {
                r++;
            }

                  i = r + 1;

                                                                                while (l > 0 && r + 1 < n && s[l - 1] == s[r + 1]) {
                l--;
                r++;
            }

                                       if (r - l + 1 > len) {
                start = l;
                len = r - l + 1;
            }
        }

        return s.substr(start, len);
    }
};
