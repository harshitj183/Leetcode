 

class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";

        // Hash maps to store frequencies
        unordered_map<char, int> targetFreq;
        unordered_map<char, int> windowFreq;

        // Populate target character frequencies
        for (char c : t) {
            targetFreq[c]++;
        }

        int required = targetFreq.size(); // Unique characters needed from t
        int formed = 0;                   // Unique characters meeting target count in current window

        int left = 0;
        int minLen = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            windowFreq[c]++;

            // If the current character's count matches its required count in t
            if (targetFreq.count(c) && windowFreq[c] == targetFreq[c]) {
                formed++;
            }

            // Shrink window from the left as long as it contains all required characters
            while (formed == required) {
                // Update minimum length window
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // Remove s[left] from the window
                char leftChar = s[left];
                windowFreq[leftChar]--;

                if (targetFreq.count(leftChar) && windowFreq[leftChar] < targetFreq[leftChar]) {
                    formed--;
                }

                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};