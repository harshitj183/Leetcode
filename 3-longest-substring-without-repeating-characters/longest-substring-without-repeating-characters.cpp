class Solution {
public:
     int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0, maxLen = 0;  int cnt =0;

        for (int right = 0; right < s.length(); ++right) {
             
          
            while (seen.find(s[right]) != seen.end()) {
                seen.erase(s[left]);
                left++;
                cnt--;
            }
            seen.insert(s[right]);
            cnt++;
            maxLen = max(maxLen, cnt);
        }

        return maxLen;
    }
 
};