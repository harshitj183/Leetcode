// Last updated: 5/2/2026, 11:29:42 pm
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
              int i = s.length() - 1;

         
        while (i >= 0 && s[i] == ' ') {
            i--;

        }











                       while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
            ;
        }

              return length;
    }
};
