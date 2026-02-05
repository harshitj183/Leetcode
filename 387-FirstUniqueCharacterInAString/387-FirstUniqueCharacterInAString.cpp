// Last updated: 5/2/2026, 11:28:03 pm
class Solution {
public:
    int firstUniqChar(string s) {
        
        int freq[26] = {0};
         
  for(char c : s) {
                               freq[c - 'a']++;
        }
 
                         for(int i = 0; i < s.length(); i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1; 
    }
};
