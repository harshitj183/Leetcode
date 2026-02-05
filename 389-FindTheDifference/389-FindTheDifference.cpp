// Last updated: 5/2/2026, 11:28:01 pm
class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = 0;
        for(char cs : s) c ^= cs;
        for(char ct : t) c ^= ct;
        return c;
    }
};