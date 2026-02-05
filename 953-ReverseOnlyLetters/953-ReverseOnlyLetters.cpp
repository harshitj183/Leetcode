// Last updated: 5/2/2026, 11:27:06 pm
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string s2 = s;
   int i = 0, j = s.size() - 1;

        while (i < j) {
      if (!isalpha(s2[i])) {
                i++;
                                       } else if (!isalpha(s2[j])) {
                j--;
            } else {
                      swap(s2[i], s2[j]);
                i++;
                j--;
            }
        }

        return s2;
    }
};
