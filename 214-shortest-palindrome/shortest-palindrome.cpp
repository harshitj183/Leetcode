class Solution {
public:
    string shortestPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());

        string combined = s + "#" + rev;
        int n = combined.size();

        vector<int> lps(n, 0);

        // Build LPS array
        for (int i = 1; i < n; i++) {
            int j = lps[i - 1];
            while (j > 0 && combined[i] != combined[j]) {
                j = lps[j - 1];
            }
            if (combined[i] == combined[j]) {
                j++;
            }
            lps[i] = j;
        }

        // Characters to add in front
        int palLen = lps[n - 1];
        string toAdd = s.substr(palLen);
        reverse(toAdd.begin(), toAdd.end());

        return toAdd + s;
    }
};
