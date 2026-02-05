// Last updated: 5/2/2026, 11:27:20 pm
class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.length(); i++) {
             
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32; 
            }
        }
        return s;
    }
};
