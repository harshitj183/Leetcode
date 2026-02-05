// Last updated: 5/2/2026, 11:28:11 pm
class Solution {
public:
    string reverseVowels(string s) {

        string vowels = "aeiouAEIOU";

        for (int i = 0, j = s.size() - 1; i < j;) {

             
            if (vowels.find(s[i]) == string::npos) {
                i++;
            }

             
            else if (vowels.find(s[j]) == string::npos) {
                j--;
            }

             
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};
