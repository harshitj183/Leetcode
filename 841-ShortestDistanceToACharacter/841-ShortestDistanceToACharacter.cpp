// Last updated: 5/2/2026, 11:27:14 pm
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans(n);
        
        // Left to right pass
        int last = -1e9;
        for (int i = 0; i < n; i++) {
            if (s[i] == c)
                last = i;
            ans[i] = i - last;
        }
        
        // Right to left pass
        last = 1e9;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == c)
                last = i;
            ans[i] = min(ans[i], last - i);
        }
        
        return ans;
    }
};
