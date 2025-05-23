class Solution {
public:
    int longestPalindrome(string s) {
                 unordered_map<char, int> count;
                   for (char c : s) {
            count[c]++;
        }

        int length = 0;
                      bool hOdd = false;

        for (auto& pair : count) {
                           int freq = pair.second;
            length += (freq / 2) * 2;  
                       if (freq % 2 == 1) {
                hOdd = true;   
            }
        }

                   if (hOdd) length += 1;

        return length;
    }
};
